#include <vulkan/vulkan.h>

void* copy_structure(void* structure) {
    void* return_struct = NULL;
    switch(*(VkStructureType*) structure) {
        case VkPhysicalDeviceExternalMemorySciBufFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceExternalMemorySciBufFeaturesNV));
        case VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV));
        case VkPhysicalDevicePushConstantBankFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDevicePushConstantBankFeaturesNV));
        case VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV));
        case VkPhysicalDevicePrivateDataFeatures:
            return_struct = malloc(sizeof(VkPhysicalDevicePrivateDataFeatures));
        case VkPhysicalDeviceClusterAccelerationStructureFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceClusterAccelerationStructureFeaturesNV));
        case VkPhysicalDeviceVariablePointersFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceVariablePointersFeatures));
        case VkPhysicalDeviceExternalSciSyncFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceExternalSciSyncFeaturesNV));
        case VkPhysicalDeviceExternalSciSync2FeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceExternalSciSync2FeaturesNV));
        case VkPhysicalDeviceMultiviewFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceMultiviewFeatures));
        case VkPhysicalDevicePresentIdFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDevicePresentIdFeaturesKHR));
        case VkPhysicalDevicePresentId2FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDevicePresentId2FeaturesKHR));
        case VkPhysicalDevicePresentWaitFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDevicePresentWaitFeaturesKHR));
        case VkPhysicalDevicePresentWait2FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDevicePresentWait2FeaturesKHR));
        case VkPhysicalDevicePresentTimingFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDevicePresentTimingFeaturesEXT));
        case VkPhysicalDevice16BitStorageFeatures:
            return_struct = malloc(sizeof(VkPhysicalDevice16BitStorageFeatures));
        case VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures));
        case VkPhysicalDeviceSamplerYcbcrConversionFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceSamplerYcbcrConversionFeatures));
        case VkPhysicalDeviceProtectedMemoryFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceProtectedMemoryFeatures));
        case VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT));
        case VkPhysicalDeviceMultiDrawFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceMultiDrawFeaturesEXT));
        case VkPhysicalDeviceInlineUniformBlockFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceInlineUniformBlockFeatures));
        case VkPhysicalDeviceMaintenance4Features:
            return_struct = malloc(sizeof(VkPhysicalDeviceMaintenance4Features));
        case VkPhysicalDeviceMaintenance5Features:
            return_struct = malloc(sizeof(VkPhysicalDeviceMaintenance5Features));
        case VkPhysicalDeviceMaintenance6Features:
            return_struct = malloc(sizeof(VkPhysicalDeviceMaintenance6Features));
        case VkPhysicalDeviceMaintenance7FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceMaintenance7FeaturesKHR));
        case VkPhysicalDeviceMaintenance8FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceMaintenance8FeaturesKHR));
        case VkPhysicalDeviceMaintenance9FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceMaintenance9FeaturesKHR));
        case VkPhysicalDeviceMaintenance11FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceMaintenance11FeaturesKHR));
        case VkPhysicalDeviceMaintenance10FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceMaintenance10FeaturesKHR));
        case VkPhysicalDeviceShaderDrawParametersFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderDrawParametersFeatures));
        case VkPhysicalDeviceShaderFloat16Int8Features:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderFloat16Int8Features));
        case VkPhysicalDeviceHostQueryResetFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceHostQueryResetFeatures));
        case VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM));
        case VkPhysicalDeviceGlobalPriorityQueryFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceGlobalPriorityQueryFeatures));
        case VkPhysicalDeviceDeviceMemoryReportFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT));
        case VkPhysicalDeviceDescriptorIndexingFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceDescriptorIndexingFeatures));
        case VkPhysicalDeviceTimelineSemaphoreFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceTimelineSemaphoreFeatures));
        case VkPhysicalDevice8BitStorageFeatures:
            return_struct = malloc(sizeof(VkPhysicalDevice8BitStorageFeatures));
        case VkPhysicalDeviceConditionalRenderingFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceConditionalRenderingFeaturesEXT));
        case VkPhysicalDeviceVulkanMemoryModelFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceVulkanMemoryModelFeatures));
        case VkPhysicalDeviceShaderAtomicInt64Features:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderAtomicInt64Features));
        case VkPhysicalDeviceShaderAtomicFloatFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT));
        case VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT));
        case VkPhysicalDeviceVertexAttributeDivisorFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceVertexAttributeDivisorFeatures));
        case VkPhysicalDeviceASTCDecodeFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceASTCDecodeFeaturesEXT));
        case VkPhysicalDeviceTransformFeedbackFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceTransformFeedbackFeaturesEXT));
        case VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV));
        case VkPhysicalDeviceExclusiveScissorFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceExclusiveScissorFeaturesNV));
        case VkPhysicalDeviceCornerSampledImageFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceCornerSampledImageFeaturesNV));
        case VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR));
        case VkPhysicalDeviceShaderImageFootprintFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderImageFootprintFeaturesNV));
        case VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV));
        case VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR));
        case VkPhysicalDeviceCopyMemoryIndirectFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV));
        case VkPhysicalDeviceMemoryDecompressionFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceMemoryDecompressionFeaturesEXT));
        case VkPhysicalDeviceShadingRateImageFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceShadingRateImageFeaturesNV));
        case VkPhysicalDeviceInvocationMaskFeaturesHUAWEI:
            return_struct = malloc(sizeof(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI));
        case VkPhysicalDeviceMeshShaderFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceMeshShaderFeaturesNV));
        case VkPhysicalDeviceMeshShaderFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceMeshShaderFeaturesEXT));
        case VkPhysicalDeviceAccelerationStructureFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceAccelerationStructureFeaturesKHR));
        case VkPhysicalDeviceRayTracingPipelineFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceRayTracingPipelineFeaturesKHR));
        case VkPhysicalDeviceRayQueryFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceRayQueryFeaturesKHR));
        case VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR));
        case VkPhysicalDeviceFragmentDensityMapFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT));
        case VkPhysicalDeviceFragmentDensityMap2FeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT));
        case VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT));
        case VkPhysicalDeviceScalarBlockLayoutFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceScalarBlockLayoutFeatures));
        case VkPhysicalDeviceUniformBufferStandardLayoutFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures));
        case VkPhysicalDeviceDepthClipEnableFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceDepthClipEnableFeaturesEXT));
        case VkPhysicalDeviceMemoryPriorityFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceMemoryPriorityFeaturesEXT));
        case VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT));
        case VkPhysicalDeviceBufferDeviceAddressFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceBufferDeviceAddressFeatures));
        case VkPhysicalDeviceBufferDeviceAddressFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT));
        case VkPhysicalDeviceImagelessFramebufferFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceImagelessFramebufferFeatures));
        case VkPhysicalDeviceTextureCompressionASTCHDRFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures));
        case VkPhysicalDeviceCooperativeMatrixFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceCooperativeMatrixFeaturesNV));
        case VkPhysicalDeviceYcbcrImageArraysFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT));
        case VkPhysicalDevicePresentBarrierFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDevicePresentBarrierFeaturesNV));
        case VkPhysicalDevicePerformanceQueryFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDevicePerformanceQueryFeaturesKHR));
        case VkPhysicalDeviceCoverageReductionModeFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceCoverageReductionModeFeaturesNV));
        case VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL));
        case VkPhysicalDeviceShaderClockFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderClockFeaturesKHR));
        case VkPhysicalDeviceIndexTypeUint8Features:
            return_struct = malloc(sizeof(VkPhysicalDeviceIndexTypeUint8Features));
        case VkPhysicalDeviceShaderSMBuiltinsFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV));
        case VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT));
        case VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures));
        case VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT));
        case VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR));
        case VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures));
        case VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT));
        case VkPhysicalDeviceSubgroupSizeControlFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceSubgroupSizeControlFeatures));
        case VkPhysicalDeviceLineRasterizationFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceLineRasterizationFeatures));
        case VkPhysicalDevicePipelineCreationCacheControlFeatures:
            return_struct = malloc(sizeof(VkPhysicalDevicePipelineCreationCacheControlFeatures));
        case VkPhysicalDeviceVulkan11Features:
            return_struct = malloc(sizeof(VkPhysicalDeviceVulkan11Features));
        case VkPhysicalDeviceVulkan12Features:
            return_struct = malloc(sizeof(VkPhysicalDeviceVulkan12Features));
        case VkPhysicalDeviceVulkan13Features:
            return_struct = malloc(sizeof(VkPhysicalDeviceVulkan13Features));
        case VkPhysicalDeviceVulkan14Features:
            return_struct = malloc(sizeof(VkPhysicalDeviceVulkan14Features));
        case VkPhysicalDeviceCoherentMemoryFeaturesAMD:
            return_struct = malloc(sizeof(VkPhysicalDeviceCoherentMemoryFeaturesAMD));
        case VkPhysicalDeviceGpaFeaturesAMD:
            return_struct = malloc(sizeof(VkPhysicalDeviceGpaFeaturesAMD));
        case VkPhysicalDeviceCustomBorderColorFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceCustomBorderColorFeaturesEXT));
        case VkPhysicalDeviceBorderColorSwizzleFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT));
        case VkPhysicalDeviceExtendedDynamicStateFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT));
        case VkPhysicalDeviceExtendedDynamicState2FeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT));
        case VkPhysicalDeviceExtendedDynamicState3FeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT));
        case VkPhysicalDeviceExtendedFlagsFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceExtendedFlagsFeaturesKHR));
        case VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV));
        case VkPhysicalDeviceDiagnosticsConfigFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceDiagnosticsConfigFeaturesNV));
        case VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures));
        case VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR));
        case VkPhysicalDeviceRobustness2FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceRobustness2FeaturesKHR));
        case VkPhysicalDeviceImageRobustnessFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceImageRobustnessFeatures));
        case VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR));
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkPhysicalDevicePortabilitySubsetFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDevicePortabilitySubsetFeaturesKHR));
#endif
        case VkPhysicalDevice4444FormatsFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDevice4444FormatsFeaturesEXT));
        case VkPhysicalDeviceSubpassShadingFeaturesHUAWEI:
            return_struct = malloc(sizeof(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI));
        case VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI:
            return_struct = malloc(sizeof(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI));
        case VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT));
        case VkPhysicalDeviceFragmentShadingRateFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceFragmentShadingRateFeaturesKHR));
        case VkPhysicalDeviceShaderTerminateInvocationFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderTerminateInvocationFeatures));
        case VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV));
        case VkPhysicalDeviceImage2DViewOf3DFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT));
        case VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT));
        case VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT));
        case VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT));
        case VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT));
        case VkPhysicalDeviceDepthClipControlFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceDepthClipControlFeaturesEXT));
        case VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT));
        case VkPhysicalDeviceCustomResolveFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceCustomResolveFeaturesEXT));
        case VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT));
        case VkPhysicalDeviceDepthClampControlFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceDepthClampControlFeaturesEXT));
        case VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT));
        case VkPhysicalDeviceExternalMemoryRDMAFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV));
        case VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR));
        case VkPhysicalDeviceColorWriteEnableFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceColorWriteEnableFeaturesEXT));
        case VkPhysicalDeviceSynchronization2Features:
            return_struct = malloc(sizeof(VkPhysicalDeviceSynchronization2Features));
        case VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR));
        case VkPhysicalDeviceHostImageCopyFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceHostImageCopyFeatures));
        case VkPhysicalDeviceVulkanSC10Features:
            return_struct = malloc(sizeof(VkPhysicalDeviceVulkanSC10Features));
        case VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT));
        case VkPhysicalDeviceLegacyDitheringFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceLegacyDitheringFeaturesEXT));
        case VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT));
        case VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT));
        case VkPhysicalDevicePipelineProtectedAccessFeatures:
            return_struct = malloc(sizeof(VkPhysicalDevicePipelineProtectedAccessFeatures));
        case VkPhysicalDeviceVideoMaintenance1FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceVideoMaintenance1FeaturesKHR));
        case VkPhysicalDeviceVideoMaintenance2FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceVideoMaintenance2FeaturesKHR));
        case VkPhysicalDeviceVideoDecodeVP9FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceVideoDecodeVP9FeaturesKHR));
        case VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR));
        case VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR));
        case VkPhysicalDeviceVideoEncodeAV1FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceVideoEncodeAV1FeaturesKHR));
        case VkPhysicalDeviceInheritedViewportScissorFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceInheritedViewportScissorFeaturesNV));
        case VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT));
        case VkPhysicalDeviceProvokingVertexFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceProvokingVertexFeaturesEXT));
        case VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR));
        case VkPhysicalDeviceDescriptorBufferFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceDescriptorBufferFeaturesEXT));
        case VkPhysicalDeviceShaderIntegerDotProductFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderIntegerDotProductFeatures));
        case VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR));
        case VkPhysicalDeviceShaderFmaFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderFmaFeaturesKHR));
        case VkPhysicalDeviceRayTracingMotionBlurFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV));
        case VkPhysicalDeviceRayTracingValidationFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceRayTracingValidationFeaturesNV));
        case VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV));
        case VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT));
        case VkPhysicalDeviceDynamicRenderingFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceDynamicRenderingFeatures));
        case VkPhysicalDeviceImageViewMinLodFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceImageViewMinLodFeaturesEXT));
        case VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT));
        case VkPhysicalDeviceLinearColorAttachmentFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceLinearColorAttachmentFeaturesNV));
        case VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT));
        case VkPhysicalDevicePipelineBinaryFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDevicePipelineBinaryFeaturesKHR));
        case VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM:
            return_struct = malloc(sizeof(VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM));
        case VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE:
            return_struct = malloc(sizeof(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE));
        case VkPhysicalDeviceNestedCommandBufferFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceNestedCommandBufferFeaturesEXT));
        case VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT));
        case VkPhysicalDeviceImageCompressionControlFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceImageCompressionControlFeaturesEXT));
        case VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT));
        case VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT));
        case VkPhysicalDeviceOpacityMicromapFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceOpacityMicromapFeaturesKHR));
        case VkPhysicalDeviceOpacityMicromapFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceOpacityMicromapFeaturesEXT));
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkPhysicalDeviceDisplacementMicromapFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceDisplacementMicromapFeaturesNV));
#endif
        case VkPhysicalDevicePipelinePropertiesFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDevicePipelinePropertiesFeaturesEXT));
        case VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD));
        case VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT));
        case VkPhysicalDevicePipelineRobustnessFeatures:
            return_struct = malloc(sizeof(VkPhysicalDevicePipelineRobustnessFeatures));
        case VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM));
        case VkPhysicalDeviceImageProcessingFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceImageProcessingFeaturesQCOM));
        case VkPhysicalDeviceTilePropertiesFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceTilePropertiesFeaturesQCOM));
        case VkPhysicalDeviceAmigoProfilingFeaturesSEC:
            return_struct = malloc(sizeof(VkPhysicalDeviceAmigoProfilingFeaturesSEC));
        case VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT));
        case VkPhysicalDeviceAddressBindingReportFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceAddressBindingReportFeaturesEXT));
        case VkPhysicalDeviceOpticalFlowFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceOpticalFlowFeaturesNV));
        case VkPhysicalDeviceFaultFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceFaultFeaturesEXT));
        case VkPhysicalDeviceFaultFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceFaultFeaturesKHR));
        case VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT));
        case VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM));
        case VkPhysicalDeviceFrameBoundaryFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceFrameBoundaryFeaturesEXT));
        case VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT));
        case VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR));
        case VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR));
        case VkPhysicalDeviceDepthBiasControlFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceDepthBiasControlFeaturesEXT));
        case VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT));
        case VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV));
        case VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV));
        case VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM));
        case VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR));
        case VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM));
        case VkPhysicalDeviceShaderObjectFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderObjectFeaturesEXT));
        case VkPhysicalDeviceShaderTileImageFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderTileImageFeaturesEXT));
        case VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX:
            return_struct = malloc(sizeof(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX));
        case VkPhysicalDeviceCooperativeMatrixFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceCooperativeMatrixFeaturesKHR));
        case VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM));
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkPhysicalDeviceShaderEnqueueFeaturesAMDX:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderEnqueueFeaturesAMDX));
#endif
        case VkPhysicalDeviceAntiLagFeaturesAMD:
            return_struct = malloc(sizeof(VkPhysicalDeviceAntiLagFeaturesAMD));
        case VkPhysicalDeviceTileMemoryHeapFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceTileMemoryHeapFeaturesQCOM));
        case VkPhysicalDeviceCubicClampFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceCubicClampFeaturesQCOM));
        case VkPhysicalDeviceYcbcrDegammaFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM));
        case VkPhysicalDeviceCubicWeightsFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceCubicWeightsFeaturesQCOM));
        case VkPhysicalDeviceImageProcessing2FeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceImageProcessing2FeaturesQCOM));
        case VkPhysicalDeviceImageProcessing3FeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceImageProcessing3FeaturesQCOM));
        case VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV));
        case VkPhysicalDevicePerStageDescriptorSetFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDevicePerStageDescriptorSetFeaturesNV));
        case VkPhysicalDeviceExternalFormatResolveFeaturesANDROID:
            return_struct = malloc(sizeof(VkPhysicalDeviceExternalFormatResolveFeaturesANDROID));
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkPhysicalDeviceCudaKernelLaunchFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceCudaKernelLaunchFeaturesNV));
#endif
        case VkPhysicalDeviceSchedulingControlsFeaturesARM:
            return_struct = malloc(sizeof(VkPhysicalDeviceSchedulingControlsFeaturesARM));
        case VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG:
            return_struct = malloc(sizeof(VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG));
        case VkPhysicalDeviceRenderPassStripedFeaturesARM:
            return_struct = malloc(sizeof(VkPhysicalDeviceRenderPassStripedFeaturesARM));
        case VkPhysicalDevicePipelineOpacityMicromapFeaturesARM:
            return_struct = malloc(sizeof(VkPhysicalDevicePipelineOpacityMicromapFeaturesARM));
        case VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR));
        case VkPhysicalDeviceShaderSubgroupRotateFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderSubgroupRotateFeatures));
        case VkPhysicalDeviceShaderExpectAssumeFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderExpectAssumeFeatures));
        case VkPhysicalDeviceShaderFloatControls2Features:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderFloatControls2Features));
        case VkPhysicalDeviceDynamicRenderingLocalReadFeatures:
            return_struct = malloc(sizeof(VkPhysicalDeviceDynamicRenderingLocalReadFeatures));
        case VkPhysicalDeviceShaderQuadControlFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderQuadControlFeaturesKHR));
        case VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV));
        case VkPhysicalDeviceMapMemoryPlacedFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT));
        case VkPhysicalDeviceShaderBfloat16FeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderBfloat16FeaturesKHR));
        case VkPhysicalDeviceRawAccessChainsFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceRawAccessChainsFeaturesNV));
        case VkPhysicalDeviceCommandBufferInheritanceFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceCommandBufferInheritanceFeaturesNV));
        case VkPhysicalDeviceImageAlignmentControlFeaturesMESA:
            return_struct = malloc(sizeof(VkPhysicalDeviceImageAlignmentControlFeaturesMESA));
        case VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT));
        case VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR));
        case VkPhysicalDeviceCooperativeMatrix2FeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceCooperativeMatrix2FeaturesNV));
        case VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV));
        case VkPhysicalDeviceHdrVividFeaturesHUAWEI:
            return_struct = malloc(sizeof(VkPhysicalDeviceHdrVividFeaturesHUAWEI));
        case VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT));
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkPhysicalDeviceDenseGeometryFormatFeaturesAMDX:
            return_struct = malloc(sizeof(VkPhysicalDeviceDenseGeometryFormatFeaturesAMDX));
#endif
        case VkPhysicalDeviceDepthClampZeroOneFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceDepthClampZeroOneFeaturesKHR));
        case VkPhysicalDeviceCooperativeVectorFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceCooperativeVectorFeaturesNV));
        case VkPhysicalDeviceTileShadingFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceTileShadingFeaturesQCOM));
        case VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE:
            return_struct = malloc(sizeof(VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE));
        case VkPhysicalDevicePresentMeteringFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDevicePresentMeteringFeaturesNV));
        case VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT));
        case VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE));
        case VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT));
        case VkPhysicalDeviceFormatPackFeaturesARM:
            return_struct = malloc(sizeof(VkPhysicalDeviceFormatPackFeaturesARM));
        case VkPhysicalDeviceThrottleHintFeaturesSEC:
            return_struct = malloc(sizeof(VkPhysicalDeviceThrottleHintFeaturesSEC));
        case VkPhysicalDeviceTensorFeaturesARM:
            return_struct = malloc(sizeof(VkPhysicalDeviceTensorFeaturesARM));
        case VkPhysicalDeviceDescriptorBufferTensorFeaturesARM:
            return_struct = malloc(sizeof(VkPhysicalDeviceDescriptorBufferTensorFeaturesARM));
        case VkPhysicalDeviceShaderFloat8FeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderFloat8FeaturesEXT));
        case VkPhysicalDeviceDataGraphFeaturesARM:
            return_struct = malloc(sizeof(VkPhysicalDeviceDataGraphFeaturesARM));
        case VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC:
            return_struct = malloc(sizeof(VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC));
        case VkPhysicalDeviceDataGraphModelFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceDataGraphModelFeaturesQCOM));
        case VkPhysicalDeviceShaderUntypedPointersFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderUntypedPointersFeaturesKHR));
        case VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE:
            return_struct = malloc(sizeof(VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE));
        case VkPhysicalDeviceShader64BitIndexingFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShader64BitIndexingFeaturesEXT));
        case VkPhysicalDeviceQueuePerfHintFeaturesQCOM:
            return_struct = malloc(sizeof(VkPhysicalDeviceQueuePerfHintFeaturesQCOM));
        case VkPhysicalDevicePerformanceCountersByRegionFeaturesARM:
            return_struct = malloc(sizeof(VkPhysicalDevicePerformanceCountersByRegionFeaturesARM));
        case VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV:
            return_struct = malloc(sizeof(VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV));
        case VkPhysicalDeviceShaderLongVectorFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderLongVectorFeaturesEXT));
        case VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT));
        case VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT));
        case VkPhysicalDeviceShaderSplitBarrierFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderSplitBarrierFeaturesEXT));
        case VkPhysicalDeviceDescriptorHeapFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceDescriptorHeapFeaturesEXT));
        case VkPhysicalDeviceShaderInstrumentationFeaturesARM:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderInstrumentationFeaturesARM));
        case VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR));
        case VkPhysicalDeviceShaderConstantDataFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderConstantDataFeaturesKHR));
        case VkPhysicalDeviceShaderAbortFeaturesKHR:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderAbortFeaturesKHR));
        case VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM:
            return_struct = malloc(sizeof(VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM));
        case VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT:
            return_struct = malloc(sizeof(VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT));
    }
    *((VkStructureType*) return_struct) = *((VkStructureType*) structure);
    return return_struct;
}
