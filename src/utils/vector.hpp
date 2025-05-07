namespace utils
{
    
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

            Vector3()
            {
                this->x = 0.0f;
                this->y = 0.0f;
                this->z = 0.0f;
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

            Vector3 operator+(Vector3 const& right)
            {
                return Vector3(
                    this->x + right.x, 
                    this->y + right.y, 
                    this->z + right.z
                );
            }

            Vector3 operator-(Vector3 const& right)
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

    struct Vector2
    {
        float x;
        float y;
    };
} // namespace utils