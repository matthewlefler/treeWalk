#include <math.h>

/// @author Matthew Lefler @skye
namespace Vector3
{
    /// @brief A vector3 made of 3 floats
    class Vector3
    {
        public: 
            float x;
            float y;
            float z;

            Vector3(float x, float y, float z)
            {
                this->x = x;
                this->y = y;
                this->z = z;
            }
            
            // default constructor
            Vector3()
            {
                this->x = 0.0f;
                this->y = 0.0f;
                this->z = 0.0f;
            }

            // add two vectors together by each componenet 
            Vector3 operator+(Vector3 const& right)
            {
                return Vector3(
                    this->x + right.x, 
                    this->y + right.y, 
                    this->z + right.z
                );
            }

            // subtract two vectors by each componenet 
            Vector3 operator-(Vector3 const& right)
            {
                return Vector3(
                    this->x - right.x, 
                    this->y - right.y, 
                    this->z - right.z
                );
            }

            Vector3 operator+=(Vector3 const& right)
            {
                return Vector3(
                    this->x + right.x, 
                    this->y + right.y, 
                    this->z + right.z
                );
            }

            Vector3 operator-=(Vector3 const& right)
            {
                return Vector3(
                    this->x - right.x, 
                    this->y - right.y, 
                    this->z - right.z
                );
            }
    };

    static const Vector3 Up = Vector3(0.0f, 1.0f, 0.0f);
    static const Vector3 Down = Vector3(0.0f, -1.0f, 0.0f);

    static const Vector3 Left = Vector3(-1.0f, 0.0f, 0.0f);
    static const Vector3 Right = Vector3(1.0f, 0.0f, 0.0f);

    static const Vector3 Forward = Vector3(0.0f, 0.0f, 1.0f);
    static const Vector3 Backward = Vector3(0.0f, 0.0f, -1.0f);

    /// @brief creates a normalized vector3 created from a roll and a pitch angle
    /// @param roll the roll angle in radians
    /// @param pitch the pitch angle in radians
    /// @return a normalized vector3 created from a roll and a pitch angle
    static Vector3 Vec3FromRollPitch(float roll, float pitch)
    {
        /*
         * 2d point = (cos(a), sin(a)), on the xz plane 
         * where a = the roll angle
         * 
         * 2d point = (cos(b), sin(b)), on the xy plane 
         * where b = the pitch angle
         * 
         * scale the first point by the first component, cos(b)
         * to get the proper x and z values
         * 
         * x component = cos(pitch) * cos(roll)
         * z component = cos(pitch) * sin(roll)
         * 
         * y component = sin(pitch)
        */
        
        float scaler = std::cos(pitch);

        float x = std::cos(roll) * scaler;
        float z = std::sin(roll) * scaler;

        float y = std::sin(pitch);
        
        return Vector3(x, y, z);
    };
} // namespace Vector3