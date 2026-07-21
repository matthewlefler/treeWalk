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

bool compare_VkPhysicalDeviceExternalMemorySciBufFeaturesNV(VkPhysicalDeviceExternalMemorySciBufFeaturesNV a, VkPhysicalDeviceExternalMemorySciBufFeaturesNV b) {
    if (
        a.sciBufImport >= b.sciBufImport &&
        a.sciBufExport >= b.sciBufExport
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV a, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV b) {
    if (
        a.deviceGeneratedCommands >= b.deviceGeneratedCommands
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePushConstantBankFeaturesNV(VkPhysicalDevicePushConstantBankFeaturesNV a, VkPhysicalDevicePushConstantBankFeaturesNV b) {
    if (
        a.pushConstantBank >= b.pushConstantBank
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV a, VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV b) {
    if (
        a.deviceGeneratedCompute >= b.deviceGeneratedCompute &&
        a.deviceGeneratedComputePipelines >= b.deviceGeneratedComputePipelines &&
        a.deviceGeneratedComputeCaptureReplay >= b.deviceGeneratedComputeCaptureReplay
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePrivateDataFeatures(VkPhysicalDevicePrivateDataFeatures a, VkPhysicalDevicePrivateDataFeatures b) {
    if (
        a.privateData >= b.privateData
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceClusterAccelerationStructureFeaturesNV(VkPhysicalDeviceClusterAccelerationStructureFeaturesNV a, VkPhysicalDeviceClusterAccelerationStructureFeaturesNV b) {
    if (
        a.clusterAccelerationStructure >= b.clusterAccelerationStructure
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVariablePointersFeatures(VkPhysicalDeviceVariablePointersFeatures a, VkPhysicalDeviceVariablePointersFeatures b) {
    if (
        a.variablePointersStorageBuffer >= b.variablePointersStorageBuffer &&
        a.variablePointers >= b.variablePointers
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceExternalSciSyncFeaturesNV(VkPhysicalDeviceExternalSciSyncFeaturesNV a, VkPhysicalDeviceExternalSciSyncFeaturesNV b) {
    if (
        a.sciSyncFence >= b.sciSyncFence &&
        a.sciSyncSemaphore >= b.sciSyncSemaphore &&
        a.sciSyncImport >= b.sciSyncImport &&
        a.sciSyncExport >= b.sciSyncExport
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceExternalSciSync2FeaturesNV(VkPhysicalDeviceExternalSciSync2FeaturesNV a, VkPhysicalDeviceExternalSciSync2FeaturesNV b) {
    if (
        a.sciSyncFence >= b.sciSyncFence &&
        a.sciSyncSemaphore2 >= b.sciSyncSemaphore2 &&
        a.sciSyncImport >= b.sciSyncImport &&
        a.sciSyncExport >= b.sciSyncExport
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMultiviewFeatures(VkPhysicalDeviceMultiviewFeatures a, VkPhysicalDeviceMultiviewFeatures b) {
    if (
        a.multiview >= b.multiview &&
        a.multiviewGeometryShader >= b.multiviewGeometryShader &&
        a.multiviewTessellationShader >= b.multiviewTessellationShader
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePresentIdFeaturesKHR(VkPhysicalDevicePresentIdFeaturesKHR a, VkPhysicalDevicePresentIdFeaturesKHR b) {
    if (
        a.presentId >= b.presentId
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePresentId2FeaturesKHR(VkPhysicalDevicePresentId2FeaturesKHR a, VkPhysicalDevicePresentId2FeaturesKHR b) {
    if (
        a.presentId2 >= b.presentId2
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePresentWaitFeaturesKHR(VkPhysicalDevicePresentWaitFeaturesKHR a, VkPhysicalDevicePresentWaitFeaturesKHR b) {
    if (
        a.presentWait >= b.presentWait
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePresentWait2FeaturesKHR(VkPhysicalDevicePresentWait2FeaturesKHR a, VkPhysicalDevicePresentWait2FeaturesKHR b) {
    if (
        a.presentWait2 >= b.presentWait2
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePresentTimingFeaturesEXT(VkPhysicalDevicePresentTimingFeaturesEXT a, VkPhysicalDevicePresentTimingFeaturesEXT b) {
    if (
        a.presentTiming >= b.presentTiming &&
        a.presentAtAbsoluteTime >= b.presentAtAbsoluteTime &&
        a.presentAtRelativeTime >= b.presentAtRelativeTime
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevice16BitStorageFeatures(VkPhysicalDevice16BitStorageFeatures a, VkPhysicalDevice16BitStorageFeatures b) {
    if (
        a.storageBuffer16BitAccess >= b.storageBuffer16BitAccess &&
        a.uniformAndStorageBuffer16BitAccess >= b.uniformAndStorageBuffer16BitAccess &&
        a.storagePushConstant16 >= b.storagePushConstant16 &&
        a.storageInputOutput16 >= b.storageInputOutput16
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures a, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures b) {
    if (
        a.shaderSubgroupExtendedTypes >= b.shaderSubgroupExtendedTypes
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceSamplerYcbcrConversionFeatures(VkPhysicalDeviceSamplerYcbcrConversionFeatures a, VkPhysicalDeviceSamplerYcbcrConversionFeatures b) {
    if (
        a.samplerYcbcrConversion >= b.samplerYcbcrConversion
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceProtectedMemoryFeatures(VkPhysicalDeviceProtectedMemoryFeatures a, VkPhysicalDeviceProtectedMemoryFeatures b) {
    if (
        a.protectedMemory >= b.protectedMemory
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT a, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT b) {
    if (
        a.advancedBlendCoherentOperations >= b.advancedBlendCoherentOperations
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMultiDrawFeaturesEXT(VkPhysicalDeviceMultiDrawFeaturesEXT a, VkPhysicalDeviceMultiDrawFeaturesEXT b) {
    if (
        a.multiDraw >= b.multiDraw
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceInlineUniformBlockFeatures(VkPhysicalDeviceInlineUniformBlockFeatures a, VkPhysicalDeviceInlineUniformBlockFeatures b) {
    if (
        a.inlineUniformBlock >= b.inlineUniformBlock &&
        a.descriptorBindingInlineUniformBlockUpdateAfterBind >= b.descriptorBindingInlineUniformBlockUpdateAfterBind
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMaintenance4Features(VkPhysicalDeviceMaintenance4Features a, VkPhysicalDeviceMaintenance4Features b) {
    if (
        a.maintenance4 >= b.maintenance4
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMaintenance5Features(VkPhysicalDeviceMaintenance5Features a, VkPhysicalDeviceMaintenance5Features b) {
    if (
        a.maintenance5 >= b.maintenance5
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMaintenance6Features(VkPhysicalDeviceMaintenance6Features a, VkPhysicalDeviceMaintenance6Features b) {
    if (
        a.maintenance6 >= b.maintenance6
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMaintenance7FeaturesKHR(VkPhysicalDeviceMaintenance7FeaturesKHR a, VkPhysicalDeviceMaintenance7FeaturesKHR b) {
    if (
        a.maintenance7 >= b.maintenance7
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMaintenance8FeaturesKHR(VkPhysicalDeviceMaintenance8FeaturesKHR a, VkPhysicalDeviceMaintenance8FeaturesKHR b) {
    if (
        a.maintenance8 >= b.maintenance8
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMaintenance9FeaturesKHR(VkPhysicalDeviceMaintenance9FeaturesKHR a, VkPhysicalDeviceMaintenance9FeaturesKHR b) {
    if (
        a.maintenance9 >= b.maintenance9
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMaintenance11FeaturesKHR(VkPhysicalDeviceMaintenance11FeaturesKHR a, VkPhysicalDeviceMaintenance11FeaturesKHR b) {
    if (
        a.maintenance11 >= b.maintenance11
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMaintenance10FeaturesKHR(VkPhysicalDeviceMaintenance10FeaturesKHR a, VkPhysicalDeviceMaintenance10FeaturesKHR b) {
    if (
        a.maintenance10 >= b.maintenance10
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderDrawParametersFeatures(VkPhysicalDeviceShaderDrawParametersFeatures a, VkPhysicalDeviceShaderDrawParametersFeatures b) {
    if (
        a.shaderDrawParameters >= b.shaderDrawParameters
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderFloat16Int8Features(VkPhysicalDeviceShaderFloat16Int8Features a, VkPhysicalDeviceShaderFloat16Int8Features b) {
    if (
        a.shaderFloat16 >= b.shaderFloat16 &&
        a.shaderInt8 >= b.shaderInt8
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceHostQueryResetFeatures(VkPhysicalDeviceHostQueryResetFeatures a, VkPhysicalDeviceHostQueryResetFeatures b) {
    if (
        a.hostQueryReset >= b.hostQueryReset
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM(VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM a, VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM b) {
    if (
        a.elapsedTimerQuery >= b.elapsedTimerQuery
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceGlobalPriorityQueryFeatures(VkPhysicalDeviceGlobalPriorityQueryFeatures a, VkPhysicalDeviceGlobalPriorityQueryFeatures b) {
    if (
        a.globalPriorityQuery >= b.globalPriorityQuery
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT a, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT b) {
    if (
        a.deviceMemoryReport >= b.deviceMemoryReport
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDescriptorIndexingFeatures(VkPhysicalDeviceDescriptorIndexingFeatures a, VkPhysicalDeviceDescriptorIndexingFeatures b) {
    if (
        a.shaderInputAttachmentArrayDynamicIndexing >= b.shaderInputAttachmentArrayDynamicIndexing &&
        a.shaderUniformTexelBufferArrayDynamicIndexing >= b.shaderUniformTexelBufferArrayDynamicIndexing &&
        a.shaderStorageTexelBufferArrayDynamicIndexing >= b.shaderStorageTexelBufferArrayDynamicIndexing &&
        a.shaderUniformBufferArrayNonUniformIndexing >= b.shaderUniformBufferArrayNonUniformIndexing &&
        a.shaderSampledImageArrayNonUniformIndexing >= b.shaderSampledImageArrayNonUniformIndexing &&
        a.shaderStorageBufferArrayNonUniformIndexing >= b.shaderStorageBufferArrayNonUniformIndexing &&
        a.shaderStorageImageArrayNonUniformIndexing >= b.shaderStorageImageArrayNonUniformIndexing &&
        a.shaderInputAttachmentArrayNonUniformIndexing >= b.shaderInputAttachmentArrayNonUniformIndexing &&
        a.shaderUniformTexelBufferArrayNonUniformIndexing >= b.shaderUniformTexelBufferArrayNonUniformIndexing &&
        a.shaderStorageTexelBufferArrayNonUniformIndexing >= b.shaderStorageTexelBufferArrayNonUniformIndexing &&
        a.descriptorBindingUniformBufferUpdateAfterBind >= b.descriptorBindingUniformBufferUpdateAfterBind &&
        a.descriptorBindingSampledImageUpdateAfterBind >= b.descriptorBindingSampledImageUpdateAfterBind &&
        a.descriptorBindingStorageImageUpdateAfterBind >= b.descriptorBindingStorageImageUpdateAfterBind &&
        a.descriptorBindingStorageBufferUpdateAfterBind >= b.descriptorBindingStorageBufferUpdateAfterBind &&
        a.descriptorBindingUniformTexelBufferUpdateAfterBind >= b.descriptorBindingUniformTexelBufferUpdateAfterBind &&
        a.descriptorBindingStorageTexelBufferUpdateAfterBind >= b.descriptorBindingStorageTexelBufferUpdateAfterBind &&
        a.descriptorBindingUpdateUnusedWhilePending >= b.descriptorBindingUpdateUnusedWhilePending &&
        a.descriptorBindingPartiallyBound >= b.descriptorBindingPartiallyBound &&
        a.descriptorBindingVariableDescriptorCount >= b.descriptorBindingVariableDescriptorCount &&
        a.runtimeDescriptorArray >= b.runtimeDescriptorArray
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceTimelineSemaphoreFeatures(VkPhysicalDeviceTimelineSemaphoreFeatures a, VkPhysicalDeviceTimelineSemaphoreFeatures b) {
    if (
        a.timelineSemaphore >= b.timelineSemaphore
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevice8BitStorageFeatures(VkPhysicalDevice8BitStorageFeatures a, VkPhysicalDevice8BitStorageFeatures b) {
    if (
        a.storageBuffer8BitAccess >= b.storageBuffer8BitAccess &&
        a.uniformAndStorageBuffer8BitAccess >= b.uniformAndStorageBuffer8BitAccess &&
        a.storagePushConstant8 >= b.storagePushConstant8
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceConditionalRenderingFeaturesEXT(VkPhysicalDeviceConditionalRenderingFeaturesEXT a, VkPhysicalDeviceConditionalRenderingFeaturesEXT b) {
    if (
        a.conditionalRendering >= b.conditionalRendering &&
        a.inheritedConditionalRendering >= b.inheritedConditionalRendering
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVulkanMemoryModelFeatures(VkPhysicalDeviceVulkanMemoryModelFeatures a, VkPhysicalDeviceVulkanMemoryModelFeatures b) {
    if (
        a.vulkanMemoryModel >= b.vulkanMemoryModel &&
        a.vulkanMemoryModelDeviceScope >= b.vulkanMemoryModelDeviceScope &&
        a.vulkanMemoryModelAvailabilityVisibilityChains >= b.vulkanMemoryModelAvailabilityVisibilityChains
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderAtomicInt64Features(VkPhysicalDeviceShaderAtomicInt64Features a, VkPhysicalDeviceShaderAtomicInt64Features b) {
    if (
        a.shaderBufferInt64Atomics >= b.shaderBufferInt64Atomics &&
        a.shaderSharedInt64Atomics >= b.shaderSharedInt64Atomics
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT a, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT b) {
    if (
        a.shaderBufferFloat32Atomics >= b.shaderBufferFloat32Atomics &&
        a.shaderBufferFloat32AtomicAdd >= b.shaderBufferFloat32AtomicAdd &&
        a.shaderBufferFloat64Atomics >= b.shaderBufferFloat64Atomics &&
        a.shaderBufferFloat64AtomicAdd >= b.shaderBufferFloat64AtomicAdd &&
        a.shaderSharedFloat32Atomics >= b.shaderSharedFloat32Atomics &&
        a.shaderSharedFloat32AtomicAdd >= b.shaderSharedFloat32AtomicAdd &&
        a.shaderSharedFloat64Atomics >= b.shaderSharedFloat64Atomics &&
        a.shaderSharedFloat64AtomicAdd >= b.shaderSharedFloat64AtomicAdd &&
        a.shaderImageFloat32Atomics >= b.shaderImageFloat32Atomics &&
        a.shaderImageFloat32AtomicAdd >= b.shaderImageFloat32AtomicAdd &&
        a.sparseImageFloat32Atomics >= b.sparseImageFloat32Atomics &&
        a.sparseImageFloat32AtomicAdd >= b.sparseImageFloat32AtomicAdd
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT a, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT b) {
    if (
        a.shaderBufferFloat16Atomics >= b.shaderBufferFloat16Atomics &&
        a.shaderBufferFloat16AtomicAdd >= b.shaderBufferFloat16AtomicAdd &&
        a.shaderBufferFloat16AtomicMinMax >= b.shaderBufferFloat16AtomicMinMax &&
        a.shaderBufferFloat32AtomicMinMax >= b.shaderBufferFloat32AtomicMinMax &&
        a.shaderBufferFloat64AtomicMinMax >= b.shaderBufferFloat64AtomicMinMax &&
        a.shaderSharedFloat16Atomics >= b.shaderSharedFloat16Atomics &&
        a.shaderSharedFloat16AtomicAdd >= b.shaderSharedFloat16AtomicAdd &&
        a.shaderSharedFloat16AtomicMinMax >= b.shaderSharedFloat16AtomicMinMax &&
        a.shaderSharedFloat32AtomicMinMax >= b.shaderSharedFloat32AtomicMinMax &&
        a.shaderSharedFloat64AtomicMinMax >= b.shaderSharedFloat64AtomicMinMax &&
        a.shaderImageFloat32AtomicMinMax >= b.shaderImageFloat32AtomicMinMax &&
        a.sparseImageFloat32AtomicMinMax >= b.sparseImageFloat32AtomicMinMax
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVertexAttributeDivisorFeatures(VkPhysicalDeviceVertexAttributeDivisorFeatures a, VkPhysicalDeviceVertexAttributeDivisorFeatures b) {
    if (
        a.vertexAttributeInstanceRateDivisor >= b.vertexAttributeInstanceRateDivisor &&
        a.vertexAttributeInstanceRateZeroDivisor >= b.vertexAttributeInstanceRateZeroDivisor
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceASTCDecodeFeaturesEXT(VkPhysicalDeviceASTCDecodeFeaturesEXT a, VkPhysicalDeviceASTCDecodeFeaturesEXT b) {
    if (
        a.decodeModeSharedExponent >= b.decodeModeSharedExponent
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceTransformFeedbackFeaturesEXT(VkPhysicalDeviceTransformFeedbackFeaturesEXT a, VkPhysicalDeviceTransformFeedbackFeaturesEXT b) {
    if (
        a.transformFeedback >= b.transformFeedback &&
        a.geometryStreams >= b.geometryStreams
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV a, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV b) {
    if (
        a.representativeFragmentTest >= b.representativeFragmentTest
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceExclusiveScissorFeaturesNV(VkPhysicalDeviceExclusiveScissorFeaturesNV a, VkPhysicalDeviceExclusiveScissorFeaturesNV b) {
    if (
        a.exclusiveScissor >= b.exclusiveScissor
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCornerSampledImageFeaturesNV(VkPhysicalDeviceCornerSampledImageFeaturesNV a, VkPhysicalDeviceCornerSampledImageFeaturesNV b) {
    if (
        a.cornerSampledImage >= b.cornerSampledImage
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR(VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR a, VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR b) {
    if (
        a.computeDerivativeGroupQuads >= b.computeDerivativeGroupQuads &&
        a.computeDerivativeGroupLinear >= b.computeDerivativeGroupLinear
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderImageFootprintFeaturesNV(VkPhysicalDeviceShaderImageFootprintFeaturesNV a, VkPhysicalDeviceShaderImageFootprintFeaturesNV b) {
    if (
        a.imageFootprint >= b.imageFootprint
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV a, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV b) {
    if (
        a.dedicatedAllocationImageAliasing >= b.dedicatedAllocationImageAliasing
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR(VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR a, VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR b) {
    if (
        a.indirectMemoryCopy >= b.indirectMemoryCopy &&
        a.indirectMemoryToImageCopy >= b.indirectMemoryToImageCopy
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV a, VkPhysicalDeviceCopyMemoryIndirectFeaturesNV b) {
    if (
        a.indirectCopy >= b.indirectCopy
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMemoryDecompressionFeaturesEXT(VkPhysicalDeviceMemoryDecompressionFeaturesEXT a, VkPhysicalDeviceMemoryDecompressionFeaturesEXT b) {
    if (
        a.memoryDecompression >= b.memoryDecompression
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShadingRateImageFeaturesNV(VkPhysicalDeviceShadingRateImageFeaturesNV a, VkPhysicalDeviceShadingRateImageFeaturesNV b) {
    if (
        a.shadingRateImage >= b.shadingRateImage &&
        a.shadingRateCoarseSampleOrder >= b.shadingRateCoarseSampleOrder
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI a, VkPhysicalDeviceInvocationMaskFeaturesHUAWEI b) {
    if (
        a.invocationMask >= b.invocationMask
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMeshShaderFeaturesNV(VkPhysicalDeviceMeshShaderFeaturesNV a, VkPhysicalDeviceMeshShaderFeaturesNV b) {
    if (
        a.taskShader >= b.taskShader &&
        a.meshShader >= b.meshShader
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMeshShaderFeaturesEXT(VkPhysicalDeviceMeshShaderFeaturesEXT a, VkPhysicalDeviceMeshShaderFeaturesEXT b) {
    if (
        a.taskShader >= b.taskShader &&
        a.meshShader >= b.meshShader &&
        a.multiviewMeshShader >= b.multiviewMeshShader &&
        a.primitiveFragmentShadingRateMeshShader >= b.primitiveFragmentShadingRateMeshShader &&
        a.meshShaderQueries >= b.meshShaderQueries
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceAccelerationStructureFeaturesKHR(VkPhysicalDeviceAccelerationStructureFeaturesKHR a, VkPhysicalDeviceAccelerationStructureFeaturesKHR b) {
    if (
        a.accelerationStructure >= b.accelerationStructure &&
        a.accelerationStructureCaptureReplay >= b.accelerationStructureCaptureReplay &&
        a.accelerationStructureIndirectBuild >= b.accelerationStructureIndirectBuild &&
        a.accelerationStructureHostCommands >= b.accelerationStructureHostCommands &&
        a.descriptorBindingAccelerationStructureUpdateAfterBind >= b.descriptorBindingAccelerationStructureUpdateAfterBind
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(VkPhysicalDeviceRayTracingPipelineFeaturesKHR a, VkPhysicalDeviceRayTracingPipelineFeaturesKHR b) {
    if (
        a.rayTracingPipeline >= b.rayTracingPipeline &&
        a.rayTracingPipelineShaderGroupHandleCaptureReplay >= b.rayTracingPipelineShaderGroupHandleCaptureReplay &&
        a.rayTracingPipelineShaderGroupHandleCaptureReplayMixed >= b.rayTracingPipelineShaderGroupHandleCaptureReplayMixed &&
        a.rayTracingPipelineTraceRaysIndirect >= b.rayTracingPipelineTraceRaysIndirect &&
        a.rayTraversalPrimitiveCulling >= b.rayTraversalPrimitiveCulling
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRayQueryFeaturesKHR(VkPhysicalDeviceRayQueryFeaturesKHR a, VkPhysicalDeviceRayQueryFeaturesKHR b) {
    if (
        a.rayQuery >= b.rayQuery
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR a, VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR b) {
    if (
        a.rayTracingMaintenance1 >= b.rayTracingMaintenance1 &&
        a.rayTracingPipelineTraceRaysIndirect2 >= b.rayTracingPipelineTraceRaysIndirect2
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(VkPhysicalDeviceFragmentDensityMapFeaturesEXT a, VkPhysicalDeviceFragmentDensityMapFeaturesEXT b) {
    if (
        a.fragmentDensityMap >= b.fragmentDensityMap &&
        a.fragmentDensityMapDynamic >= b.fragmentDensityMapDynamic &&
        a.fragmentDensityMapNonSubsampledImages >= b.fragmentDensityMapNonSubsampledImages
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT a, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT b) {
    if (
        a.fragmentDensityMapDeferred >= b.fragmentDensityMapDeferred
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT a, VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT b) {
    if (
        a.fragmentDensityMapOffset >= b.fragmentDensityMapOffset
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceScalarBlockLayoutFeatures(VkPhysicalDeviceScalarBlockLayoutFeatures a, VkPhysicalDeviceScalarBlockLayoutFeatures b) {
    if (
        a.scalarBlockLayout >= b.scalarBlockLayout
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(VkPhysicalDeviceUniformBufferStandardLayoutFeatures a, VkPhysicalDeviceUniformBufferStandardLayoutFeatures b) {
    if (
        a.uniformBufferStandardLayout >= b.uniformBufferStandardLayout
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDepthClipEnableFeaturesEXT(VkPhysicalDeviceDepthClipEnableFeaturesEXT a, VkPhysicalDeviceDepthClipEnableFeaturesEXT b) {
    if (
        a.depthClipEnable >= b.depthClipEnable
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMemoryPriorityFeaturesEXT(VkPhysicalDeviceMemoryPriorityFeaturesEXT a, VkPhysicalDeviceMemoryPriorityFeaturesEXT b) {
    if (
        a.memoryPriority >= b.memoryPriority
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT a, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT b) {
    if (
        a.pageableDeviceLocalMemory >= b.pageableDeviceLocalMemory
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceBufferDeviceAddressFeatures(VkPhysicalDeviceBufferDeviceAddressFeatures a, VkPhysicalDeviceBufferDeviceAddressFeatures b) {
    if (
        a.bufferDeviceAddress >= b.bufferDeviceAddress &&
        a.bufferDeviceAddressCaptureReplay >= b.bufferDeviceAddressCaptureReplay &&
        a.bufferDeviceAddressMultiDevice >= b.bufferDeviceAddressMultiDevice
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT a, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT b) {
    if (
        a.bufferDeviceAddress >= b.bufferDeviceAddress &&
        a.bufferDeviceAddressCaptureReplay >= b.bufferDeviceAddressCaptureReplay &&
        a.bufferDeviceAddressMultiDevice >= b.bufferDeviceAddressMultiDevice
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceImagelessFramebufferFeatures(VkPhysicalDeviceImagelessFramebufferFeatures a, VkPhysicalDeviceImagelessFramebufferFeatures b) {
    if (
        a.imagelessFramebuffer >= b.imagelessFramebuffer
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(VkPhysicalDeviceTextureCompressionASTCHDRFeatures a, VkPhysicalDeviceTextureCompressionASTCHDRFeatures b) {
    if (
        a.textureCompressionASTC_HDR >= b.textureCompressionASTC_HDR
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCooperativeMatrixFeaturesNV(VkPhysicalDeviceCooperativeMatrixFeaturesNV a, VkPhysicalDeviceCooperativeMatrixFeaturesNV b) {
    if (
        a.cooperativeMatrix >= b.cooperativeMatrix &&
        a.cooperativeMatrixRobustBufferAccess >= b.cooperativeMatrixRobustBufferAccess
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT a, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT b) {
    if (
        a.ycbcrImageArrays >= b.ycbcrImageArrays
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePresentBarrierFeaturesNV(VkPhysicalDevicePresentBarrierFeaturesNV a, VkPhysicalDevicePresentBarrierFeaturesNV b) {
    if (
        a.presentBarrier >= b.presentBarrier
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePerformanceQueryFeaturesKHR(VkPhysicalDevicePerformanceQueryFeaturesKHR a, VkPhysicalDevicePerformanceQueryFeaturesKHR b) {
    if (
        a.performanceCounterQueryPools >= b.performanceCounterQueryPools &&
        a.performanceCounterMultipleQueryPools >= b.performanceCounterMultipleQueryPools
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCoverageReductionModeFeaturesNV(VkPhysicalDeviceCoverageReductionModeFeaturesNV a, VkPhysicalDeviceCoverageReductionModeFeaturesNV b) {
    if (
        a.coverageReductionMode >= b.coverageReductionMode
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL a, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL b) {
    if (
        a.shaderIntegerFunctions2 >= b.shaderIntegerFunctions2
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderClockFeaturesKHR(VkPhysicalDeviceShaderClockFeaturesKHR a, VkPhysicalDeviceShaderClockFeaturesKHR b) {
    if (
        a.shaderSubgroupClock >= b.shaderSubgroupClock &&
        a.shaderDeviceClock >= b.shaderDeviceClock
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceIndexTypeUint8Features(VkPhysicalDeviceIndexTypeUint8Features a, VkPhysicalDeviceIndexTypeUint8Features b) {
    if (
        a.indexTypeUint8 >= b.indexTypeUint8
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV a, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV b) {
    if (
        a.shaderSMBuiltins >= b.shaderSMBuiltins
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT a, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT b) {
    if (
        a.fragmentShaderSampleInterlock >= b.fragmentShaderSampleInterlock &&
        a.fragmentShaderPixelInterlock >= b.fragmentShaderPixelInterlock &&
        a.fragmentShaderShadingRateInterlock >= b.fragmentShaderShadingRateInterlock
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures a, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures b) {
    if (
        a.separateDepthStencilLayouts >= b.separateDepthStencilLayouts
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT a, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT b) {
    if (
        a.primitiveTopologyListRestart >= b.primitiveTopologyListRestart &&
        a.primitiveTopologyPatchListRestart >= b.primitiveTopologyPatchListRestart
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR a, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR b) {
    if (
        a.pipelineExecutableInfo >= b.pipelineExecutableInfo
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures a, VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures b) {
    if (
        a.shaderDemoteToHelperInvocation >= b.shaderDemoteToHelperInvocation
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT a, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT b) {
    if (
        a.texelBufferAlignment >= b.texelBufferAlignment
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceSubgroupSizeControlFeatures(VkPhysicalDeviceSubgroupSizeControlFeatures a, VkPhysicalDeviceSubgroupSizeControlFeatures b) {
    if (
        a.subgroupSizeControl >= b.subgroupSizeControl &&
        a.computeFullSubgroups >= b.computeFullSubgroups
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceLineRasterizationFeatures(VkPhysicalDeviceLineRasterizationFeatures a, VkPhysicalDeviceLineRasterizationFeatures b) {
    if (
        a.rectangularLines >= b.rectangularLines &&
        a.bresenhamLines >= b.bresenhamLines &&
        a.smoothLines >= b.smoothLines &&
        a.stippledRectangularLines >= b.stippledRectangularLines &&
        a.stippledBresenhamLines >= b.stippledBresenhamLines &&
        a.stippledSmoothLines >= b.stippledSmoothLines
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePipelineCreationCacheControlFeatures(VkPhysicalDevicePipelineCreationCacheControlFeatures a, VkPhysicalDevicePipelineCreationCacheControlFeatures b) {
    if (
        a.pipelineCreationCacheControl >= b.pipelineCreationCacheControl
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVulkan11Features(VkPhysicalDeviceVulkan11Features a, VkPhysicalDeviceVulkan11Features b) {
    if (
        a.storageBuffer16BitAccess >= b.storageBuffer16BitAccess &&
        a.uniformAndStorageBuffer16BitAccess >= b.uniformAndStorageBuffer16BitAccess &&
        a.storagePushConstant16 >= b.storagePushConstant16 &&
        a.storageInputOutput16 >= b.storageInputOutput16 &&
        a.multiview >= b.multiview &&
        a.multiviewGeometryShader >= b.multiviewGeometryShader &&
        a.multiviewTessellationShader >= b.multiviewTessellationShader &&
        a.variablePointersStorageBuffer >= b.variablePointersStorageBuffer &&
        a.variablePointers >= b.variablePointers &&
        a.protectedMemory >= b.protectedMemory &&
        a.samplerYcbcrConversion >= b.samplerYcbcrConversion &&
        a.shaderDrawParameters >= b.shaderDrawParameters
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVulkan12Features(VkPhysicalDeviceVulkan12Features a, VkPhysicalDeviceVulkan12Features b) {
    if (
        a.samplerMirrorClampToEdge >= b.samplerMirrorClampToEdge &&
        a.drawIndirectCount >= b.drawIndirectCount &&
        a.storageBuffer8BitAccess >= b.storageBuffer8BitAccess &&
        a.uniformAndStorageBuffer8BitAccess >= b.uniformAndStorageBuffer8BitAccess &&
        a.storagePushConstant8 >= b.storagePushConstant8 &&
        a.shaderBufferInt64Atomics >= b.shaderBufferInt64Atomics &&
        a.shaderSharedInt64Atomics >= b.shaderSharedInt64Atomics &&
        a.shaderFloat16 >= b.shaderFloat16 &&
        a.shaderInt8 >= b.shaderInt8 &&
        a.descriptorIndexing >= b.descriptorIndexing &&
        a.shaderInputAttachmentArrayDynamicIndexing >= b.shaderInputAttachmentArrayDynamicIndexing &&
        a.shaderUniformTexelBufferArrayDynamicIndexing >= b.shaderUniformTexelBufferArrayDynamicIndexing &&
        a.shaderStorageTexelBufferArrayDynamicIndexing >= b.shaderStorageTexelBufferArrayDynamicIndexing &&
        a.shaderUniformBufferArrayNonUniformIndexing >= b.shaderUniformBufferArrayNonUniformIndexing &&
        a.shaderSampledImageArrayNonUniformIndexing >= b.shaderSampledImageArrayNonUniformIndexing &&
        a.shaderStorageBufferArrayNonUniformIndexing >= b.shaderStorageBufferArrayNonUniformIndexing &&
        a.shaderStorageImageArrayNonUniformIndexing >= b.shaderStorageImageArrayNonUniformIndexing &&
        a.shaderInputAttachmentArrayNonUniformIndexing >= b.shaderInputAttachmentArrayNonUniformIndexing &&
        a.shaderUniformTexelBufferArrayNonUniformIndexing >= b.shaderUniformTexelBufferArrayNonUniformIndexing &&
        a.shaderStorageTexelBufferArrayNonUniformIndexing >= b.shaderStorageTexelBufferArrayNonUniformIndexing &&
        a.descriptorBindingUniformBufferUpdateAfterBind >= b.descriptorBindingUniformBufferUpdateAfterBind &&
        a.descriptorBindingSampledImageUpdateAfterBind >= b.descriptorBindingSampledImageUpdateAfterBind &&
        a.descriptorBindingStorageImageUpdateAfterBind >= b.descriptorBindingStorageImageUpdateAfterBind &&
        a.descriptorBindingStorageBufferUpdateAfterBind >= b.descriptorBindingStorageBufferUpdateAfterBind &&
        a.descriptorBindingUniformTexelBufferUpdateAfterBind >= b.descriptorBindingUniformTexelBufferUpdateAfterBind &&
        a.descriptorBindingStorageTexelBufferUpdateAfterBind >= b.descriptorBindingStorageTexelBufferUpdateAfterBind &&
        a.descriptorBindingUpdateUnusedWhilePending >= b.descriptorBindingUpdateUnusedWhilePending &&
        a.descriptorBindingPartiallyBound >= b.descriptorBindingPartiallyBound &&
        a.descriptorBindingVariableDescriptorCount >= b.descriptorBindingVariableDescriptorCount &&
        a.runtimeDescriptorArray >= b.runtimeDescriptorArray &&
        a.samplerFilterMinmax >= b.samplerFilterMinmax &&
        a.scalarBlockLayout >= b.scalarBlockLayout &&
        a.imagelessFramebuffer >= b.imagelessFramebuffer &&
        a.uniformBufferStandardLayout >= b.uniformBufferStandardLayout &&
        a.shaderSubgroupExtendedTypes >= b.shaderSubgroupExtendedTypes &&
        a.separateDepthStencilLayouts >= b.separateDepthStencilLayouts &&
        a.hostQueryReset >= b.hostQueryReset &&
        a.timelineSemaphore >= b.timelineSemaphore &&
        a.bufferDeviceAddress >= b.bufferDeviceAddress &&
        a.bufferDeviceAddressCaptureReplay >= b.bufferDeviceAddressCaptureReplay &&
        a.bufferDeviceAddressMultiDevice >= b.bufferDeviceAddressMultiDevice &&
        a.vulkanMemoryModel >= b.vulkanMemoryModel &&
        a.vulkanMemoryModelDeviceScope >= b.vulkanMemoryModelDeviceScope &&
        a.vulkanMemoryModelAvailabilityVisibilityChains >= b.vulkanMemoryModelAvailabilityVisibilityChains &&
        a.shaderOutputViewportIndex >= b.shaderOutputViewportIndex &&
        a.shaderOutputLayer >= b.shaderOutputLayer &&
        a.subgroupBroadcastDynamicId >= b.subgroupBroadcastDynamicId
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVulkan13Features(VkPhysicalDeviceVulkan13Features a, VkPhysicalDeviceVulkan13Features b) {
    if (
        a.robustImageAccess >= b.robustImageAccess &&
        a.inlineUniformBlock >= b.inlineUniformBlock &&
        a.descriptorBindingInlineUniformBlockUpdateAfterBind >= b.descriptorBindingInlineUniformBlockUpdateAfterBind &&
        a.pipelineCreationCacheControl >= b.pipelineCreationCacheControl &&
        a.privateData >= b.privateData &&
        a.shaderDemoteToHelperInvocation >= b.shaderDemoteToHelperInvocation &&
        a.shaderTerminateInvocation >= b.shaderTerminateInvocation &&
        a.subgroupSizeControl >= b.subgroupSizeControl &&
        a.computeFullSubgroups >= b.computeFullSubgroups &&
        a.synchronization2 >= b.synchronization2 &&
        a.textureCompressionASTC_HDR >= b.textureCompressionASTC_HDR &&
        a.shaderZeroInitializeWorkgroupMemory >= b.shaderZeroInitializeWorkgroupMemory &&
        a.dynamicRendering >= b.dynamicRendering &&
        a.shaderIntegerDotProduct >= b.shaderIntegerDotProduct &&
        a.maintenance4 >= b.maintenance4
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVulkan14Features(VkPhysicalDeviceVulkan14Features a, VkPhysicalDeviceVulkan14Features b) {
    if (
        a.globalPriorityQuery >= b.globalPriorityQuery &&
        a.shaderSubgroupRotate >= b.shaderSubgroupRotate &&
        a.shaderSubgroupRotateClustered >= b.shaderSubgroupRotateClustered &&
        a.shaderFloatControls2 >= b.shaderFloatControls2 &&
        a.shaderExpectAssume >= b.shaderExpectAssume &&
        a.rectangularLines >= b.rectangularLines &&
        a.bresenhamLines >= b.bresenhamLines &&
        a.smoothLines >= b.smoothLines &&
        a.stippledRectangularLines >= b.stippledRectangularLines &&
        a.stippledBresenhamLines >= b.stippledBresenhamLines &&
        a.stippledSmoothLines >= b.stippledSmoothLines &&
        a.vertexAttributeInstanceRateDivisor >= b.vertexAttributeInstanceRateDivisor &&
        a.vertexAttributeInstanceRateZeroDivisor >= b.vertexAttributeInstanceRateZeroDivisor &&
        a.indexTypeUint8 >= b.indexTypeUint8 &&
        a.dynamicRenderingLocalRead >= b.dynamicRenderingLocalRead &&
        a.maintenance5 >= b.maintenance5 &&
        a.maintenance6 >= b.maintenance6 &&
        a.pipelineProtectedAccess >= b.pipelineProtectedAccess &&
        a.pipelineRobustness >= b.pipelineRobustness &&
        a.hostImageCopy >= b.hostImageCopy &&
        a.pushDescriptor >= b.pushDescriptor
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCoherentMemoryFeaturesAMD(VkPhysicalDeviceCoherentMemoryFeaturesAMD a, VkPhysicalDeviceCoherentMemoryFeaturesAMD b) {
    if (
        a.deviceCoherentMemory >= b.deviceCoherentMemory
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceGpaFeaturesAMD(VkPhysicalDeviceGpaFeaturesAMD a, VkPhysicalDeviceGpaFeaturesAMD b) {
    if (
        a.perfCounters >= b.perfCounters &&
        a.streamingPerfCounters >= b.streamingPerfCounters &&
        a.sqThreadTracing >= b.sqThreadTracing &&
        a.clockModes >= b.clockModes
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCustomBorderColorFeaturesEXT(VkPhysicalDeviceCustomBorderColorFeaturesEXT a, VkPhysicalDeviceCustomBorderColorFeaturesEXT b) {
    if (
        a.customBorderColors >= b.customBorderColors &&
        a.customBorderColorWithoutFormat >= b.customBorderColorWithoutFormat
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT a, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT b) {
    if (
        a.borderColorSwizzle >= b.borderColorSwizzle &&
        a.borderColorSwizzleFromImage >= b.borderColorSwizzleFromImage
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT a, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT b) {
    if (
        a.extendedDynamicState >= b.extendedDynamicState
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT a, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT b) {
    if (
        a.extendedDynamicState2 >= b.extendedDynamicState2 &&
        a.extendedDynamicState2LogicOp >= b.extendedDynamicState2LogicOp &&
        a.extendedDynamicState2PatchControlPoints >= b.extendedDynamicState2PatchControlPoints
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT a, VkPhysicalDeviceExtendedDynamicState3FeaturesEXT b) {
    if (
        a.extendedDynamicState3TessellationDomainOrigin >= b.extendedDynamicState3TessellationDomainOrigin &&
        a.extendedDynamicState3DepthClampEnable >= b.extendedDynamicState3DepthClampEnable &&
        a.extendedDynamicState3PolygonMode >= b.extendedDynamicState3PolygonMode &&
        a.extendedDynamicState3RasterizationSamples >= b.extendedDynamicState3RasterizationSamples &&
        a.extendedDynamicState3SampleMask >= b.extendedDynamicState3SampleMask &&
        a.extendedDynamicState3AlphaToCoverageEnable >= b.extendedDynamicState3AlphaToCoverageEnable &&
        a.extendedDynamicState3AlphaToOneEnable >= b.extendedDynamicState3AlphaToOneEnable &&
        a.extendedDynamicState3LogicOpEnable >= b.extendedDynamicState3LogicOpEnable &&
        a.extendedDynamicState3ColorBlendEnable >= b.extendedDynamicState3ColorBlendEnable &&
        a.extendedDynamicState3ColorBlendEquation >= b.extendedDynamicState3ColorBlendEquation &&
        a.extendedDynamicState3ColorWriteMask >= b.extendedDynamicState3ColorWriteMask &&
        a.extendedDynamicState3RasterizationStream >= b.extendedDynamicState3RasterizationStream &&
        a.extendedDynamicState3ConservativeRasterizationMode >= b.extendedDynamicState3ConservativeRasterizationMode &&
        a.extendedDynamicState3ExtraPrimitiveOverestimationSize >= b.extendedDynamicState3ExtraPrimitiveOverestimationSize &&
        a.extendedDynamicState3DepthClipEnable >= b.extendedDynamicState3DepthClipEnable &&
        a.extendedDynamicState3SampleLocationsEnable >= b.extendedDynamicState3SampleLocationsEnable &&
        a.extendedDynamicState3ColorBlendAdvanced >= b.extendedDynamicState3ColorBlendAdvanced &&
        a.extendedDynamicState3ProvokingVertexMode >= b.extendedDynamicState3ProvokingVertexMode &&
        a.extendedDynamicState3LineRasterizationMode >= b.extendedDynamicState3LineRasterizationMode &&
        a.extendedDynamicState3LineStippleEnable >= b.extendedDynamicState3LineStippleEnable &&
        a.extendedDynamicState3DepthClipNegativeOneToOne >= b.extendedDynamicState3DepthClipNegativeOneToOne &&
        a.extendedDynamicState3ViewportWScalingEnable >= b.extendedDynamicState3ViewportWScalingEnable &&
        a.extendedDynamicState3ViewportSwizzle >= b.extendedDynamicState3ViewportSwizzle &&
        a.extendedDynamicState3CoverageToColorEnable >= b.extendedDynamicState3CoverageToColorEnable &&
        a.extendedDynamicState3CoverageToColorLocation >= b.extendedDynamicState3CoverageToColorLocation &&
        a.extendedDynamicState3CoverageModulationMode >= b.extendedDynamicState3CoverageModulationMode &&
        a.extendedDynamicState3CoverageModulationTableEnable >= b.extendedDynamicState3CoverageModulationTableEnable &&
        a.extendedDynamicState3CoverageModulationTable >= b.extendedDynamicState3CoverageModulationTable &&
        a.extendedDynamicState3CoverageReductionMode >= b.extendedDynamicState3CoverageReductionMode &&
        a.extendedDynamicState3RepresentativeFragmentTestEnable >= b.extendedDynamicState3RepresentativeFragmentTestEnable &&
        a.extendedDynamicState3ShadingRateImageEnable >= b.extendedDynamicState3ShadingRateImageEnable
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceExtendedFlagsFeaturesKHR(VkPhysicalDeviceExtendedFlagsFeaturesKHR a, VkPhysicalDeviceExtendedFlagsFeaturesKHR b) {
    if (
        a.extendedFlags >= b.extendedFlags
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV(VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV a, VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV b) {
    if (
        a.partitionedAccelerationStructure >= b.partitionedAccelerationStructure
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(VkPhysicalDeviceDiagnosticsConfigFeaturesNV a, VkPhysicalDeviceDiagnosticsConfigFeaturesNV b) {
    if (
        a.diagnosticsConfig >= b.diagnosticsConfig
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures a, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures b) {
    if (
        a.shaderZeroInitializeWorkgroupMemory >= b.shaderZeroInitializeWorkgroupMemory
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR a, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR b) {
    if (
        a.shaderSubgroupUniformControlFlow >= b.shaderSubgroupUniformControlFlow
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRobustness2FeaturesKHR(VkPhysicalDeviceRobustness2FeaturesKHR a, VkPhysicalDeviceRobustness2FeaturesKHR b) {
    if (
        a.robustBufferAccess2 >= b.robustBufferAccess2 &&
        a.robustImageAccess2 >= b.robustImageAccess2 &&
        a.nullDescriptor >= b.nullDescriptor
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceImageRobustnessFeatures(VkPhysicalDeviceImageRobustnessFeatures a, VkPhysicalDeviceImageRobustnessFeatures b) {
    if (
        a.robustImageAccess >= b.robustImageAccess
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR a, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR b) {
    if (
        a.workgroupMemoryExplicitLayout >= b.workgroupMemoryExplicitLayout &&
        a.workgroupMemoryExplicitLayoutScalarBlockLayout >= b.workgroupMemoryExplicitLayoutScalarBlockLayout &&
        a.workgroupMemoryExplicitLayout8BitAccess >= b.workgroupMemoryExplicitLayout8BitAccess &&
        a.workgroupMemoryExplicitLayout16BitAccess >= b.workgroupMemoryExplicitLayout16BitAccess
    ) {
        return true
    }
    return false
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool compare_VkPhysicalDevicePortabilitySubsetFeaturesKHR(VkPhysicalDevicePortabilitySubsetFeaturesKHR a, VkPhysicalDevicePortabilitySubsetFeaturesKHR b) {
    if (
        a.constantAlphaColorBlendFactors >= b.constantAlphaColorBlendFactors &&
        a.events >= b.events &&
        a.imageViewFormatReinterpretation >= b.imageViewFormatReinterpretation &&
        a.imageViewFormatSwizzle >= b.imageViewFormatSwizzle &&
        a.imageView2DOn3DImage >= b.imageView2DOn3DImage &&
        a.multisampleArrayImage >= b.multisampleArrayImage &&
        a.mutableComparisonSamplers >= b.mutableComparisonSamplers &&
        a.pointPolygons >= b.pointPolygons &&
        a.samplerMipLodBias >= b.samplerMipLodBias &&
        a.separateStencilMaskRef >= b.separateStencilMaskRef &&
        a.shaderSampleRateInterpolationFunctions >= b.shaderSampleRateInterpolationFunctions &&
        a.tessellationIsolines >= b.tessellationIsolines &&
        a.tessellationPointMode >= b.tessellationPointMode &&
        a.triangleFans >= b.triangleFans &&
        a.vertexAttributeAccessBeyondStride >= b.vertexAttributeAccessBeyondStride
    ) {
        return true
    }
    return false
}
#endif
bool compare_VkPhysicalDevice4444FormatsFeaturesEXT(VkPhysicalDevice4444FormatsFeaturesEXT a, VkPhysicalDevice4444FormatsFeaturesEXT b) {
    if (
        a.formatA4R4G4B4 >= b.formatA4R4G4B4 &&
        a.formatA4B4G4R4 >= b.formatA4B4G4R4
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI a, VkPhysicalDeviceSubpassShadingFeaturesHUAWEI b) {
    if (
        a.subpassShading >= b.subpassShading
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI a, VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI b) {
    if (
        a.clustercullingShader >= b.clustercullingShader &&
        a.multiviewClusterCullingShader >= b.multiviewClusterCullingShader
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT a, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT b) {
    if (
        a.shaderImageInt64Atomics >= b.shaderImageInt64Atomics &&
        a.sparseImageInt64Atomics >= b.sparseImageInt64Atomics
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(VkPhysicalDeviceFragmentShadingRateFeaturesKHR a, VkPhysicalDeviceFragmentShadingRateFeaturesKHR b) {
    if (
        a.pipelineFragmentShadingRate >= b.pipelineFragmentShadingRate &&
        a.primitiveFragmentShadingRate >= b.primitiveFragmentShadingRate &&
        a.attachmentFragmentShadingRate >= b.attachmentFragmentShadingRate
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderTerminateInvocationFeatures(VkPhysicalDeviceShaderTerminateInvocationFeatures a, VkPhysicalDeviceShaderTerminateInvocationFeatures b) {
    if (
        a.shaderTerminateInvocation >= b.shaderTerminateInvocation
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV a, VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV b) {
    if (
        a.fragmentShadingRateEnums >= b.fragmentShadingRateEnums &&
        a.supersampleFragmentShadingRates >= b.supersampleFragmentShadingRates &&
        a.noInvocationFragmentShadingRates >= b.noInvocationFragmentShadingRates
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT a, VkPhysicalDeviceImage2DViewOf3DFeaturesEXT b) {
    if (
        a.image2DViewOf3D >= b.image2DViewOf3D &&
        a.sampler2DViewOf3D >= b.sampler2DViewOf3D
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT a, VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT b) {
    if (
        a.imageSlicedViewOf3D >= b.imageSlicedViewOf3D
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT a, VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT b) {
    if (
        a.attachmentFeedbackLoopDynamicState >= b.attachmentFeedbackLoopDynamicState
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT(VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT a, VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT b) {
    if (
        a.legacyVertexAttributes >= b.legacyVertexAttributes
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT a, VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT b) {
    if (
        a.mutableDescriptorType >= b.mutableDescriptorType
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDepthClipControlFeaturesEXT(VkPhysicalDeviceDepthClipControlFeaturesEXT a, VkPhysicalDeviceDepthClipControlFeaturesEXT b) {
    if (
        a.depthClipControl >= b.depthClipControl
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT(VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT a, VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT b) {
    if (
        a.zeroInitializeDeviceMemory >= b.zeroInitializeDeviceMemory
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCustomResolveFeaturesEXT(VkPhysicalDeviceCustomResolveFeaturesEXT a, VkPhysicalDeviceCustomResolveFeaturesEXT b) {
    if (
        a.customResolve >= b.customResolve
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT a, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT b) {
    if (
        a.deviceGeneratedCommands >= b.deviceGeneratedCommands &&
        a.dynamicGeneratedPipelineLayout >= b.dynamicGeneratedPipelineLayout
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDepthClampControlFeaturesEXT(VkPhysicalDeviceDepthClampControlFeaturesEXT a, VkPhysicalDeviceDepthClampControlFeaturesEXT b) {
    if (
        a.depthClampControl >= b.depthClampControl
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT a, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT b) {
    if (
        a.vertexInputDynamicState >= b.vertexInputDynamicState
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV a, VkPhysicalDeviceExternalMemoryRDMAFeaturesNV b) {
    if (
        a.externalMemoryRDMA >= b.externalMemoryRDMA
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR(VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR a, VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR b) {
    if (
        a.shaderRelaxedExtendedInstruction >= b.shaderRelaxedExtendedInstruction
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceColorWriteEnableFeaturesEXT(VkPhysicalDeviceColorWriteEnableFeaturesEXT a, VkPhysicalDeviceColorWriteEnableFeaturesEXT b) {
    if (
        a.colorWriteEnable >= b.colorWriteEnable
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceSynchronization2Features(VkPhysicalDeviceSynchronization2Features a, VkPhysicalDeviceSynchronization2Features b) {
    if (
        a.synchronization2 >= b.synchronization2
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR(VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR a, VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR b) {
    if (
        a.unifiedImageLayouts >= b.unifiedImageLayouts &&
        a.unifiedImageLayoutsVideo >= b.unifiedImageLayoutsVideo
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceHostImageCopyFeatures(VkPhysicalDeviceHostImageCopyFeatures a, VkPhysicalDeviceHostImageCopyFeatures b) {
    if (
        a.hostImageCopy >= b.hostImageCopy
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVulkanSC10Features(VkPhysicalDeviceVulkanSC10Features a, VkPhysicalDeviceVulkanSC10Features b) {
    if (
        a.shaderAtomicInstructions >= b.shaderAtomicInstructions
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT a, VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT b) {
    if (
        a.primitivesGeneratedQuery >= b.primitivesGeneratedQuery &&
        a.primitivesGeneratedQueryWithRasterizerDiscard >= b.primitivesGeneratedQueryWithRasterizerDiscard &&
        a.primitivesGeneratedQueryWithNonZeroStreams >= b.primitivesGeneratedQueryWithNonZeroStreams
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceLegacyDitheringFeaturesEXT(VkPhysicalDeviceLegacyDitheringFeaturesEXT a, VkPhysicalDeviceLegacyDitheringFeaturesEXT b) {
    if (
        a.legacyDithering >= b.legacyDithering
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT a, VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT b) {
    if (
        a.multisampledRenderToSingleSampled >= b.multisampledRenderToSingleSampled
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT(VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT a, VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT b) {
    if (
        a.multisampledRenderToSwapchain >= b.multisampledRenderToSwapchain
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePipelineProtectedAccessFeatures(VkPhysicalDevicePipelineProtectedAccessFeatures a, VkPhysicalDevicePipelineProtectedAccessFeatures b) {
    if (
        a.pipelineProtectedAccess >= b.pipelineProtectedAccess
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVideoMaintenance1FeaturesKHR(VkPhysicalDeviceVideoMaintenance1FeaturesKHR a, VkPhysicalDeviceVideoMaintenance1FeaturesKHR b) {
    if (
        a.videoMaintenance1 >= b.videoMaintenance1
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVideoMaintenance2FeaturesKHR(VkPhysicalDeviceVideoMaintenance2FeaturesKHR a, VkPhysicalDeviceVideoMaintenance2FeaturesKHR b) {
    if (
        a.videoMaintenance2 >= b.videoMaintenance2
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVideoDecodeVP9FeaturesKHR(VkPhysicalDeviceVideoDecodeVP9FeaturesKHR a, VkPhysicalDeviceVideoDecodeVP9FeaturesKHR b) {
    if (
        a.videoDecodeVP9 >= b.videoDecodeVP9
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR(VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR a, VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR b) {
    if (
        a.videoEncodeQuantizationMap >= b.videoEncodeQuantizationMap
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR(VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR a, VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR b) {
    if (
        a.videoEncodeFeedback2 >= b.videoEncodeFeedback2
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVideoEncodeAV1FeaturesKHR(VkPhysicalDeviceVideoEncodeAV1FeaturesKHR a, VkPhysicalDeviceVideoEncodeAV1FeaturesKHR b) {
    if (
        a.videoEncodeAV1 >= b.videoEncodeAV1
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(VkPhysicalDeviceInheritedViewportScissorFeaturesNV a, VkPhysicalDeviceInheritedViewportScissorFeaturesNV b) {
    if (
        a.inheritedViewportScissor2D >= b.inheritedViewportScissor2D
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT a, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT b) {
    if (
        a.ycbcr2plane444Formats >= b.ycbcr2plane444Formats
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceProvokingVertexFeaturesEXT(VkPhysicalDeviceProvokingVertexFeaturesEXT a, VkPhysicalDeviceProvokingVertexFeaturesEXT b) {
    if (
        a.provokingVertexLast >= b.provokingVertexLast &&
        a.transformFeedbackPreservesProvokingVertex >= b.transformFeedbackPreservesProvokingVertex
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR(VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR a, VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR b) {
    if (
        a.videoEncodeIntraRefresh >= b.videoEncodeIntraRefresh
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDescriptorBufferFeaturesEXT(VkPhysicalDeviceDescriptorBufferFeaturesEXT a, VkPhysicalDeviceDescriptorBufferFeaturesEXT b) {
    if (
        a.descriptorBuffer >= b.descriptorBuffer &&
        a.descriptorBufferCaptureReplay >= b.descriptorBufferCaptureReplay &&
        a.descriptorBufferImageLayoutIgnored >= b.descriptorBufferImageLayoutIgnored &&
        a.descriptorBufferPushDescriptors >= b.descriptorBufferPushDescriptors
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderIntegerDotProductFeatures(VkPhysicalDeviceShaderIntegerDotProductFeatures a, VkPhysicalDeviceShaderIntegerDotProductFeatures b) {
    if (
        a.shaderIntegerDotProduct >= b.shaderIntegerDotProduct
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR a, VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR b) {
    if (
        a.fragmentShaderBarycentric >= b.fragmentShaderBarycentric
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderFmaFeaturesKHR(VkPhysicalDeviceShaderFmaFeaturesKHR a, VkPhysicalDeviceShaderFmaFeaturesKHR b) {
    if (
        a.shaderFmaFloat16 >= b.shaderFmaFloat16 &&
        a.shaderFmaFloat32 >= b.shaderFmaFloat32 &&
        a.shaderFmaFloat64 >= b.shaderFmaFloat64
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV a, VkPhysicalDeviceRayTracingMotionBlurFeaturesNV b) {
    if (
        a.rayTracingMotionBlur >= b.rayTracingMotionBlur &&
        a.rayTracingMotionBlurPipelineTraceRaysIndirect >= b.rayTracingMotionBlurPipelineTraceRaysIndirect
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRayTracingValidationFeaturesNV(VkPhysicalDeviceRayTracingValidationFeaturesNV a, VkPhysicalDeviceRayTracingValidationFeaturesNV b) {
    if (
        a.rayTracingValidation >= b.rayTracingValidation
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV(VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV a, VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV b) {
    if (
        a.spheres >= b.spheres &&
        a.linearSweptSpheres >= b.linearSweptSpheres
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT a, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT b) {
    if (
        a.formatRgba10x6WithoutYCbCrSampler >= b.formatRgba10x6WithoutYCbCrSampler
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDynamicRenderingFeatures(VkPhysicalDeviceDynamicRenderingFeatures a, VkPhysicalDeviceDynamicRenderingFeatures b) {
    if (
        a.dynamicRendering >= b.dynamicRendering
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceImageViewMinLodFeaturesEXT(VkPhysicalDeviceImageViewMinLodFeaturesEXT a, VkPhysicalDeviceImageViewMinLodFeaturesEXT b) {
    if (
        a.minLod >= b.minLod
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT a, VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT b) {
    if (
        a.rasterizationOrderColorAttachmentAccess >= b.rasterizationOrderColorAttachmentAccess &&
        a.rasterizationOrderDepthAttachmentAccess >= b.rasterizationOrderDepthAttachmentAccess &&
        a.rasterizationOrderStencilAttachmentAccess >= b.rasterizationOrderStencilAttachmentAccess
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(VkPhysicalDeviceLinearColorAttachmentFeaturesNV a, VkPhysicalDeviceLinearColorAttachmentFeaturesNV b) {
    if (
        a.linearColorAttachment >= b.linearColorAttachment
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT a, VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT b) {
    if (
        a.graphicsPipelineLibrary >= b.graphicsPipelineLibrary
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePipelineBinaryFeaturesKHR(VkPhysicalDevicePipelineBinaryFeaturesKHR a, VkPhysicalDevicePipelineBinaryFeaturesKHR b) {
    if (
        a.pipelineBinaries >= b.pipelineBinaries
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM(VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM a, VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM b) {
    if (
        a.dataGraphNeuralAcceleratorStatistics >= b.dataGraphNeuralAcceleratorStatistics
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE a, VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE b) {
    if (
        a.descriptorSetHostMapping >= b.descriptorSetHostMapping
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceNestedCommandBufferFeaturesEXT(VkPhysicalDeviceNestedCommandBufferFeaturesEXT a, VkPhysicalDeviceNestedCommandBufferFeaturesEXT b) {
    if (
        a.nestedCommandBuffer >= b.nestedCommandBuffer &&
        a.nestedCommandBufferRendering >= b.nestedCommandBufferRendering &&
        a.nestedCommandBufferSimultaneousUse >= b.nestedCommandBufferSimultaneousUse
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT a, VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT b) {
    if (
        a.shaderModuleIdentifier >= b.shaderModuleIdentifier
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceImageCompressionControlFeaturesEXT(VkPhysicalDeviceImageCompressionControlFeaturesEXT a, VkPhysicalDeviceImageCompressionControlFeaturesEXT b) {
    if (
        a.imageCompressionControl >= b.imageCompressionControl
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT a, VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT b) {
    if (
        a.imageCompressionControlSwapchain >= b.imageCompressionControlSwapchain
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT a, VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT b) {
    if (
        a.subpassMergeFeedback >= b.subpassMergeFeedback
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceOpacityMicromapFeaturesKHR(VkPhysicalDeviceOpacityMicromapFeaturesKHR a, VkPhysicalDeviceOpacityMicromapFeaturesKHR b) {
    if (
        a.micromap >= b.micromap
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceOpacityMicromapFeaturesEXT(VkPhysicalDeviceOpacityMicromapFeaturesEXT a, VkPhysicalDeviceOpacityMicromapFeaturesEXT b) {
    if (
        a.micromap >= b.micromap &&
        a.micromapCaptureReplay >= b.micromapCaptureReplay &&
        a.micromapHostCommands >= b.micromapHostCommands
    ) {
        return true
    }
    return false
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool compare_VkPhysicalDeviceDisplacementMicromapFeaturesNV(VkPhysicalDeviceDisplacementMicromapFeaturesNV a, VkPhysicalDeviceDisplacementMicromapFeaturesNV b) {
    if (
        a.displacementMicromap >= b.displacementMicromap
    ) {
        return true
    }
    return false
}
#endif
bool compare_VkPhysicalDevicePipelinePropertiesFeaturesEXT(VkPhysicalDevicePipelinePropertiesFeaturesEXT a, VkPhysicalDevicePipelinePropertiesFeaturesEXT b) {
    if (
        a.pipelinePropertiesIdentifier >= b.pipelinePropertiesIdentifier
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD a, VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD b) {
    if (
        a.shaderEarlyAndLateFragmentTests >= b.shaderEarlyAndLateFragmentTests
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT a, VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT b) {
    if (
        a.nonSeamlessCubeMap >= b.nonSeamlessCubeMap
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePipelineRobustnessFeatures(VkPhysicalDevicePipelineRobustnessFeatures a, VkPhysicalDevicePipelineRobustnessFeatures b) {
    if (
        a.pipelineRobustness >= b.pipelineRobustness
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM(VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM a, VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM b) {
    if (
        a.shaderMultipleWaitQueues >= b.shaderMultipleWaitQueues
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceImageProcessingFeaturesQCOM(VkPhysicalDeviceImageProcessingFeaturesQCOM a, VkPhysicalDeviceImageProcessingFeaturesQCOM b) {
    if (
        a.textureSampleWeighted >= b.textureSampleWeighted &&
        a.textureBoxFilter >= b.textureBoxFilter &&
        a.textureBlockMatch >= b.textureBlockMatch
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceTilePropertiesFeaturesQCOM(VkPhysicalDeviceTilePropertiesFeaturesQCOM a, VkPhysicalDeviceTilePropertiesFeaturesQCOM b) {
    if (
        a.tileProperties >= b.tileProperties
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceAmigoProfilingFeaturesSEC(VkPhysicalDeviceAmigoProfilingFeaturesSEC a, VkPhysicalDeviceAmigoProfilingFeaturesSEC b) {
    if (
        a.amigoProfiling >= b.amigoProfiling
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT a, VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT b) {
    if (
        a.attachmentFeedbackLoopLayout >= b.attachmentFeedbackLoopLayout
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceAddressBindingReportFeaturesEXT(VkPhysicalDeviceAddressBindingReportFeaturesEXT a, VkPhysicalDeviceAddressBindingReportFeaturesEXT b) {
    if (
        a.reportAddressBinding >= b.reportAddressBinding
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceOpticalFlowFeaturesNV(VkPhysicalDeviceOpticalFlowFeaturesNV a, VkPhysicalDeviceOpticalFlowFeaturesNV b) {
    if (
        a.opticalFlow >= b.opticalFlow
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceFaultFeaturesEXT(VkPhysicalDeviceFaultFeaturesEXT a, VkPhysicalDeviceFaultFeaturesEXT b) {
    if (
        a.deviceFault >= b.deviceFault &&
        a.deviceFaultVendorBinary >= b.deviceFaultVendorBinary
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceFaultFeaturesKHR(VkPhysicalDeviceFaultFeaturesKHR a, VkPhysicalDeviceFaultFeaturesKHR b) {
    if (
        a.deviceFault >= b.deviceFault &&
        a.deviceFaultVendorBinary >= b.deviceFaultVendorBinary &&
        a.deviceFaultReportMasked >= b.deviceFaultReportMasked &&
        a.deviceFaultDeviceLostOnMasked >= b.deviceFaultDeviceLostOnMasked
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT a, VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT b) {
    if (
        a.pipelineLibraryGroupHandles >= b.pipelineLibraryGroupHandles
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM a, VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM b) {
    if (
        a.shaderCoreBuiltins >= b.shaderCoreBuiltins
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceFrameBoundaryFeaturesEXT(VkPhysicalDeviceFrameBoundaryFeaturesEXT a, VkPhysicalDeviceFrameBoundaryFeaturesEXT b) {
    if (
        a.frameBoundary >= b.frameBoundary
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT a, VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT b) {
    if (
        a.dynamicRenderingUnusedAttachments >= b.dynamicRenderingUnusedAttachments
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR(VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR a, VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR b) {
    if (
        a.internallySynchronizedQueues >= b.internallySynchronizedQueues
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR(VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR a, VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR b) {
    if (
        a.swapchainMaintenance1 >= b.swapchainMaintenance1
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDepthBiasControlFeaturesEXT(VkPhysicalDeviceDepthBiasControlFeaturesEXT a, VkPhysicalDeviceDepthBiasControlFeaturesEXT b) {
    if (
        a.depthBiasControl >= b.depthBiasControl &&
        a.leastRepresentableValueForceUnormRepresentation >= b.leastRepresentableValueForceUnormRepresentation &&
        a.floatRepresentation >= b.floatRepresentation &&
        a.depthBiasExact >= b.depthBiasExact
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT(VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT a, VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT b) {
    if (
        a.rayTracingInvocationReorder >= b.rayTracingInvocationReorder
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV a, VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV b) {
    if (
        a.rayTracingInvocationReorder >= b.rayTracingInvocationReorder
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV a, VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV b) {
    if (
        a.extendedSparseAddressSpace >= b.extendedSparseAddressSpace
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM a, VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM b) {
    if (
        a.multiviewPerViewViewports >= b.multiviewPerViewViewports
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR a, VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR b) {
    if (
        a.rayTracingPositionFetch >= b.rayTracingPositionFetch
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM a, VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM b) {
    if (
        a.multiviewPerViewRenderAreas >= b.multiviewPerViewRenderAreas
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderObjectFeaturesEXT(VkPhysicalDeviceShaderObjectFeaturesEXT a, VkPhysicalDeviceShaderObjectFeaturesEXT b) {
    if (
        a.shaderObject >= b.shaderObject
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderTileImageFeaturesEXT(VkPhysicalDeviceShaderTileImageFeaturesEXT a, VkPhysicalDeviceShaderTileImageFeaturesEXT b) {
    if (
        a.shaderTileImageColorReadAccess >= b.shaderTileImageColorReadAccess &&
        a.shaderTileImageDepthReadAccess >= b.shaderTileImageDepthReadAccess &&
        a.shaderTileImageStencilReadAccess >= b.shaderTileImageStencilReadAccess
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX a, VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX b) {
    if (
        a.screenBufferImport >= b.screenBufferImport
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(VkPhysicalDeviceCooperativeMatrixFeaturesKHR a, VkPhysicalDeviceCooperativeMatrixFeaturesKHR b) {
    if (
        a.cooperativeMatrix >= b.cooperativeMatrix &&
        a.cooperativeMatrixRobustBufferAccess >= b.cooperativeMatrixRobustBufferAccess
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM(VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM a, VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM b) {
    if (
        a.cooperativeMatrixConversion >= b.cooperativeMatrixConversion
    ) {
        return true
    }
    return false
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool compare_VkPhysicalDeviceShaderEnqueueFeaturesAMDX(VkPhysicalDeviceShaderEnqueueFeaturesAMDX a, VkPhysicalDeviceShaderEnqueueFeaturesAMDX b) {
    if (
        a.shaderEnqueue >= b.shaderEnqueue &&
        a.shaderMeshEnqueue >= b.shaderMeshEnqueue
    ) {
        return true
    }
    return false
}
#endif
bool compare_VkPhysicalDeviceAntiLagFeaturesAMD(VkPhysicalDeviceAntiLagFeaturesAMD a, VkPhysicalDeviceAntiLagFeaturesAMD b) {
    if (
        a.antiLag >= b.antiLag
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceTileMemoryHeapFeaturesQCOM(VkPhysicalDeviceTileMemoryHeapFeaturesQCOM a, VkPhysicalDeviceTileMemoryHeapFeaturesQCOM b) {
    if (
        a.tileMemoryHeap >= b.tileMemoryHeap
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCubicClampFeaturesQCOM(VkPhysicalDeviceCubicClampFeaturesQCOM a, VkPhysicalDeviceCubicClampFeaturesQCOM b) {
    if (
        a.cubicRangeClamp >= b.cubicRangeClamp
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM a, VkPhysicalDeviceYcbcrDegammaFeaturesQCOM b) {
    if (
        a.ycbcrDegamma >= b.ycbcrDegamma
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCubicWeightsFeaturesQCOM(VkPhysicalDeviceCubicWeightsFeaturesQCOM a, VkPhysicalDeviceCubicWeightsFeaturesQCOM b) {
    if (
        a.selectableCubicWeights >= b.selectableCubicWeights
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceImageProcessing2FeaturesQCOM(VkPhysicalDeviceImageProcessing2FeaturesQCOM a, VkPhysicalDeviceImageProcessing2FeaturesQCOM b) {
    if (
        a.textureBlockMatch2 >= b.textureBlockMatch2
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceImageProcessing3FeaturesQCOM(VkPhysicalDeviceImageProcessing3FeaturesQCOM a, VkPhysicalDeviceImageProcessing3FeaturesQCOM b) {
    if (
        a.imageGatherLinear >= b.imageGatherLinear &&
        a.imageGatherExtendedModes >= b.imageGatherExtendedModes &&
        a.blockMatchExtendedClampToEdge >= b.blockMatchExtendedClampToEdge
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV a, VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV b) {
    if (
        a.descriptorPoolOverallocation >= b.descriptorPoolOverallocation
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePerStageDescriptorSetFeaturesNV(VkPhysicalDevicePerStageDescriptorSetFeaturesNV a, VkPhysicalDevicePerStageDescriptorSetFeaturesNV b) {
    if (
        a.perStageDescriptorSet >= b.perStageDescriptorSet &&
        a.dynamicPipelineLayout >= b.dynamicPipelineLayout
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID(VkPhysicalDeviceExternalFormatResolveFeaturesANDROID a, VkPhysicalDeviceExternalFormatResolveFeaturesANDROID b) {
    if (
        a.externalFormatResolve >= b.externalFormatResolve
    ) {
        return true
    }
    return false
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool compare_VkPhysicalDeviceCudaKernelLaunchFeaturesNV(VkPhysicalDeviceCudaKernelLaunchFeaturesNV a, VkPhysicalDeviceCudaKernelLaunchFeaturesNV b) {
    if (
        a.cudaKernelLaunchFeatures >= b.cudaKernelLaunchFeatures
    ) {
        return true
    }
    return false
}
#endif
bool compare_VkPhysicalDeviceSchedulingControlsFeaturesARM(VkPhysicalDeviceSchedulingControlsFeaturesARM a, VkPhysicalDeviceSchedulingControlsFeaturesARM b) {
    if (
        a.schedulingControls >= b.schedulingControls
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG(VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG a, VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG b) {
    if (
        a.relaxedLineRasterization >= b.relaxedLineRasterization
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRenderPassStripedFeaturesARM(VkPhysicalDeviceRenderPassStripedFeaturesARM a, VkPhysicalDeviceRenderPassStripedFeaturesARM b) {
    if (
        a.renderPassStriped >= b.renderPassStriped
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePipelineOpacityMicromapFeaturesARM(VkPhysicalDevicePipelineOpacityMicromapFeaturesARM a, VkPhysicalDevicePipelineOpacityMicromapFeaturesARM b) {
    if (
        a.pipelineOpacityMicromap >= b.pipelineOpacityMicromap
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR(VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR a, VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR b) {
    if (
        a.shaderMaximalReconvergence >= b.shaderMaximalReconvergence
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderSubgroupRotateFeatures(VkPhysicalDeviceShaderSubgroupRotateFeatures a, VkPhysicalDeviceShaderSubgroupRotateFeatures b) {
    if (
        a.shaderSubgroupRotate >= b.shaderSubgroupRotate &&
        a.shaderSubgroupRotateClustered >= b.shaderSubgroupRotateClustered
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderExpectAssumeFeatures(VkPhysicalDeviceShaderExpectAssumeFeatures a, VkPhysicalDeviceShaderExpectAssumeFeatures b) {
    if (
        a.shaderExpectAssume >= b.shaderExpectAssume
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderFloatControls2Features(VkPhysicalDeviceShaderFloatControls2Features a, VkPhysicalDeviceShaderFloatControls2Features b) {
    if (
        a.shaderFloatControls2 >= b.shaderFloatControls2
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDynamicRenderingLocalReadFeatures(VkPhysicalDeviceDynamicRenderingLocalReadFeatures a, VkPhysicalDeviceDynamicRenderingLocalReadFeatures b) {
    if (
        a.dynamicRenderingLocalRead >= b.dynamicRenderingLocalRead
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderQuadControlFeaturesKHR(VkPhysicalDeviceShaderQuadControlFeaturesKHR a, VkPhysicalDeviceShaderQuadControlFeaturesKHR b) {
    if (
        a.shaderQuadControl >= b.shaderQuadControl
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV a, VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV b) {
    if (
        a.shaderFloat16VectorAtomics >= b.shaderFloat16VectorAtomics
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT a, VkPhysicalDeviceMapMemoryPlacedFeaturesEXT b) {
    if (
        a.memoryMapPlaced >= b.memoryMapPlaced &&
        a.memoryMapRangePlaced >= b.memoryMapRangePlaced &&
        a.memoryUnmapReserve >= b.memoryUnmapReserve
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderBfloat16FeaturesKHR(VkPhysicalDeviceShaderBfloat16FeaturesKHR a, VkPhysicalDeviceShaderBfloat16FeaturesKHR b) {
    if (
        a.shaderBFloat16Type >= b.shaderBFloat16Type &&
        a.shaderBFloat16DotProduct >= b.shaderBFloat16DotProduct &&
        a.shaderBFloat16CooperativeMatrix >= b.shaderBFloat16CooperativeMatrix
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceRawAccessChainsFeaturesNV(VkPhysicalDeviceRawAccessChainsFeaturesNV a, VkPhysicalDeviceRawAccessChainsFeaturesNV b) {
    if (
        a.shaderRawAccessChains >= b.shaderRawAccessChains
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCommandBufferInheritanceFeaturesNV(VkPhysicalDeviceCommandBufferInheritanceFeaturesNV a, VkPhysicalDeviceCommandBufferInheritanceFeaturesNV b) {
    if (
        a.commandBufferInheritance >= b.commandBufferInheritance
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceImageAlignmentControlFeaturesMESA(VkPhysicalDeviceImageAlignmentControlFeaturesMESA a, VkPhysicalDeviceImageAlignmentControlFeaturesMESA b) {
    if (
        a.imageAlignmentControl >= b.imageAlignmentControl
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT(VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT a, VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT b) {
    if (
        a.shaderReplicatedComposites >= b.shaderReplicatedComposites
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR(VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR a, VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR b) {
    if (
        a.presentModeFifoLatestReady >= b.presentModeFifoLatestReady
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCooperativeMatrix2FeaturesNV(VkPhysicalDeviceCooperativeMatrix2FeaturesNV a, VkPhysicalDeviceCooperativeMatrix2FeaturesNV b) {
    if (
        a.cooperativeMatrixWorkgroupScope >= b.cooperativeMatrixWorkgroupScope &&
        a.cooperativeMatrixFlexibleDimensions >= b.cooperativeMatrixFlexibleDimensions &&
        a.cooperativeMatrixReductions >= b.cooperativeMatrixReductions &&
        a.cooperativeMatrixConversions >= b.cooperativeMatrixConversions &&
        a.cooperativeMatrixPerElementOperations >= b.cooperativeMatrixPerElementOperations &&
        a.cooperativeMatrixTensorAddressing >= b.cooperativeMatrixTensorAddressing &&
        a.cooperativeMatrixBlockLoads >= b.cooperativeMatrixBlockLoads
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV(VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV a, VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV b) {
    if (
        a.cooperativeMatrixDecodeVector >= b.cooperativeMatrixDecodeVector
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceHdrVividFeaturesHUAWEI(VkPhysicalDeviceHdrVividFeaturesHUAWEI a, VkPhysicalDeviceHdrVividFeaturesHUAWEI b) {
    if (
        a.hdrVivid >= b.hdrVivid
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT(VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT a, VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT b) {
    if (
        a.vertexAttributeRobustness >= b.vertexAttributeRobustness
    ) {
        return true
    }
    return false
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool compare_VkPhysicalDeviceDenseGeometryFormatFeaturesAMDX(VkPhysicalDeviceDenseGeometryFormatFeaturesAMDX a, VkPhysicalDeviceDenseGeometryFormatFeaturesAMDX b) {
    if (
        a.denseGeometryFormat >= b.denseGeometryFormat
    ) {
        return true
    }
    return false
}
#endif
bool compare_VkPhysicalDeviceDepthClampZeroOneFeaturesKHR(VkPhysicalDeviceDepthClampZeroOneFeaturesKHR a, VkPhysicalDeviceDepthClampZeroOneFeaturesKHR b) {
    if (
        a.depthClampZeroOne >= b.depthClampZeroOne
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceCooperativeVectorFeaturesNV(VkPhysicalDeviceCooperativeVectorFeaturesNV a, VkPhysicalDeviceCooperativeVectorFeaturesNV b) {
    if (
        a.cooperativeVector >= b.cooperativeVector &&
        a.cooperativeVectorTraining >= b.cooperativeVectorTraining
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceTileShadingFeaturesQCOM(VkPhysicalDeviceTileShadingFeaturesQCOM a, VkPhysicalDeviceTileShadingFeaturesQCOM b) {
    if (
        a.tileShading >= b.tileShading &&
        a.tileShadingFragmentStage >= b.tileShadingFragmentStage &&
        a.tileShadingColorAttachments >= b.tileShadingColorAttachments &&
        a.tileShadingDepthAttachments >= b.tileShadingDepthAttachments &&
        a.tileShadingStencilAttachments >= b.tileShadingStencilAttachments &&
        a.tileShadingInputAttachments >= b.tileShadingInputAttachments &&
        a.tileShadingSampledAttachments >= b.tileShadingSampledAttachments &&
        a.tileShadingPerTileDraw >= b.tileShadingPerTileDraw &&
        a.tileShadingPerTileDispatch >= b.tileShadingPerTileDispatch &&
        a.tileShadingDispatchTile >= b.tileShadingDispatchTile &&
        a.tileShadingApron >= b.tileShadingApron &&
        a.tileShadingAnisotropicApron >= b.tileShadingAnisotropicApron &&
        a.tileShadingAtomicOps >= b.tileShadingAtomicOps &&
        a.tileShadingImageProcessing >= b.tileShadingImageProcessing
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE(VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE a, VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE b) {
    if (
        a.fragmentDensityMapLayered >= b.fragmentDensityMapLayered
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePresentMeteringFeaturesNV(VkPhysicalDevicePresentMeteringFeaturesNV a, VkPhysicalDevicePresentMeteringFeaturesNV b) {
    if (
        a.presentMetering >= b.presentMetering
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT(VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT a, VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT b) {
    if (
        a.shaderUniformBufferUnsizedArray >= b.shaderUniformBufferUnsizedArray
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE(VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE a, VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE b) {
    if (
        a.shaderMixedFloatDotProductFloat16AccFloat32 >= b.shaderMixedFloatDotProductFloat16AccFloat32 &&
        a.shaderMixedFloatDotProductFloat16AccFloat16 >= b.shaderMixedFloatDotProductFloat16AccFloat16 &&
        a.shaderMixedFloatDotProductBFloat16Acc >= b.shaderMixedFloatDotProductBFloat16Acc &&
        a.shaderMixedFloatDotProductFloat8AccFloat32 >= b.shaderMixedFloatDotProductFloat8AccFloat32
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT(VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT a, VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT b) {
    if (
        a.primitiveRestartIndex >= b.primitiveRestartIndex
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceFormatPackFeaturesARM(VkPhysicalDeviceFormatPackFeaturesARM a, VkPhysicalDeviceFormatPackFeaturesARM b) {
    if (
        a.formatPack >= b.formatPack
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceThrottleHintFeaturesSEC(VkPhysicalDeviceThrottleHintFeaturesSEC a, VkPhysicalDeviceThrottleHintFeaturesSEC b) {
    if (
        a.throttleHint >= b.throttleHint
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceTensorFeaturesARM(VkPhysicalDeviceTensorFeaturesARM a, VkPhysicalDeviceTensorFeaturesARM b) {
    if (
        a.tensorNonPacked >= b.tensorNonPacked &&
        a.shaderTensorAccess >= b.shaderTensorAccess &&
        a.shaderStorageTensorArrayDynamicIndexing >= b.shaderStorageTensorArrayDynamicIndexing &&
        a.shaderStorageTensorArrayNonUniformIndexing >= b.shaderStorageTensorArrayNonUniformIndexing &&
        a.descriptorBindingStorageTensorUpdateAfterBind >= b.descriptorBindingStorageTensorUpdateAfterBind &&
        a.tensors >= b.tensors
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDescriptorBufferTensorFeaturesARM(VkPhysicalDeviceDescriptorBufferTensorFeaturesARM a, VkPhysicalDeviceDescriptorBufferTensorFeaturesARM b) {
    if (
        a.descriptorBufferTensorDescriptors >= b.descriptorBufferTensorDescriptors
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderFloat8FeaturesEXT(VkPhysicalDeviceShaderFloat8FeaturesEXT a, VkPhysicalDeviceShaderFloat8FeaturesEXT b) {
    if (
        a.shaderFloat8 >= b.shaderFloat8 &&
        a.shaderFloat8CooperativeMatrix >= b.shaderFloat8CooperativeMatrix
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDataGraphFeaturesARM(VkPhysicalDeviceDataGraphFeaturesARM a, VkPhysicalDeviceDataGraphFeaturesARM b) {
    if (
        a.dataGraph >= b.dataGraph &&
        a.dataGraphUpdateAfterBind >= b.dataGraphUpdateAfterBind &&
        a.dataGraphSpecializationConstants >= b.dataGraphSpecializationConstants &&
        a.dataGraphDescriptorBuffer >= b.dataGraphDescriptorBuffer &&
        a.dataGraphShaderModule >= b.dataGraphShaderModule
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC(VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC a, VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC b) {
    if (
        a.pipelineCacheIncrementalMode >= b.pipelineCacheIncrementalMode
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDataGraphModelFeaturesQCOM(VkPhysicalDeviceDataGraphModelFeaturesQCOM a, VkPhysicalDeviceDataGraphModelFeaturesQCOM b) {
    if (
        a.dataGraphModel >= b.dataGraphModel
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderUntypedPointersFeaturesKHR(VkPhysicalDeviceShaderUntypedPointersFeaturesKHR a, VkPhysicalDeviceShaderUntypedPointersFeaturesKHR b) {
    if (
        a.shaderUntypedPointers >= b.shaderUntypedPointers
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE(VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE a, VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE b) {
    if (
        a.videoEncodeRgbConversion >= b.videoEncodeRgbConversion
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShader64BitIndexingFeaturesEXT(VkPhysicalDeviceShader64BitIndexingFeaturesEXT a, VkPhysicalDeviceShader64BitIndexingFeaturesEXT b) {
    if (
        a.shader64BitIndexing >= b.shader64BitIndexing
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceQueuePerfHintFeaturesQCOM(VkPhysicalDeviceQueuePerfHintFeaturesQCOM a, VkPhysicalDeviceQueuePerfHintFeaturesQCOM b) {
    if (
        a.queuePerfHint >= b.queuePerfHint
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDevicePerformanceCountersByRegionFeaturesARM(VkPhysicalDevicePerformanceCountersByRegionFeaturesARM a, VkPhysicalDevicePerformanceCountersByRegionFeaturesARM b) {
    if (
        a.performanceCountersByRegion >= b.performanceCountersByRegion
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV(VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV a, VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV b) {
    if (
        a.computeOccupancyPriority >= b.computeOccupancyPriority
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderLongVectorFeaturesEXT(VkPhysicalDeviceShaderLongVectorFeaturesEXT a, VkPhysicalDeviceShaderLongVectorFeaturesEXT b) {
    if (
        a.longVector >= b.longVector
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT(VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT a, VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT b) {
    if (
        a.textureCompressionASTC_3D >= b.textureCompressionASTC_3D
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT(VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT a, VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT b) {
    if (
        a.shaderSubgroupPartitioned >= b.shaderSubgroupPartitioned
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderSplitBarrierFeaturesEXT(VkPhysicalDeviceShaderSplitBarrierFeaturesEXT a, VkPhysicalDeviceShaderSplitBarrierFeaturesEXT b) {
    if (
        a.shaderSplitBarrier >= b.shaderSplitBarrier
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDescriptorHeapFeaturesEXT(VkPhysicalDeviceDescriptorHeapFeaturesEXT a, VkPhysicalDeviceDescriptorHeapFeaturesEXT b) {
    if (
        a.descriptorHeap >= b.descriptorHeap &&
        a.descriptorHeapCaptureReplay >= b.descriptorHeapCaptureReplay
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderInstrumentationFeaturesARM(VkPhysicalDeviceShaderInstrumentationFeaturesARM a, VkPhysicalDeviceShaderInstrumentationFeaturesARM b) {
    if (
        a.shaderInstrumentation >= b.shaderInstrumentation
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR(VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR a, VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR b) {
    if (
        a.deviceAddressCommands >= b.deviceAddressCommands
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderConstantDataFeaturesKHR(VkPhysicalDeviceShaderConstantDataFeaturesKHR a, VkPhysicalDeviceShaderConstantDataFeaturesKHR b) {
    if (
        a.shaderConstantData >= b.shaderConstantData
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderAbortFeaturesKHR(VkPhysicalDeviceShaderAbortFeaturesKHR a, VkPhysicalDeviceShaderAbortFeaturesKHR b) {
    if (
        a.shaderAbort >= b.shaderAbort
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM(VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM a, VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM b) {
    if (
        a.dataGraphOpticalFlow >= b.dataGraphOpticalFlow
    ) {
        return true
    }
    return false
}
bool compare_VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT(VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT a, VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT b) {
    if (
        a.shaderFloat4 >= b.shaderFloat4 &&
        a.shaderFloat6 >= b.shaderFloat6 &&
        a.shaderFloat8UnsignedE8M0 >= b.shaderFloat8UnsignedE8M0 &&
        a.shaderMXInt8 >= b.shaderMXInt8
    ) {
        return true
    }
    return false
}

bool compare_structure(void* a, void* b) {
    switch(*(VkStructureType*) a) {
        case VkPhysicalDeviceExternalMemorySciBufFeaturesNV:
            return compare_VkPhysicalDeviceExternalMemorySciBufFeaturesNV(a, b)
        case VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV:
            return compare_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(a, b)
        case VkPhysicalDevicePushConstantBankFeaturesNV:
            return compare_VkPhysicalDevicePushConstantBankFeaturesNV(a, b)
        case VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV:
            return compare_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(a, b)
        case VkPhysicalDevicePrivateDataFeatures:
            return compare_VkPhysicalDevicePrivateDataFeatures(a, b)
        case VkPhysicalDeviceClusterAccelerationStructureFeaturesNV:
            return compare_VkPhysicalDeviceClusterAccelerationStructureFeaturesNV(a, b)
        case VkPhysicalDeviceVariablePointersFeatures:
            return compare_VkPhysicalDeviceVariablePointersFeatures(a, b)
        case VkPhysicalDeviceExternalSciSyncFeaturesNV:
            return compare_VkPhysicalDeviceExternalSciSyncFeaturesNV(a, b)
        case VkPhysicalDeviceExternalSciSync2FeaturesNV:
            return compare_VkPhysicalDeviceExternalSciSync2FeaturesNV(a, b)
        case VkPhysicalDeviceMultiviewFeatures:
            return compare_VkPhysicalDeviceMultiviewFeatures(a, b)
        case VkPhysicalDevicePresentIdFeaturesKHR:
            return compare_VkPhysicalDevicePresentIdFeaturesKHR(a, b)
        case VkPhysicalDevicePresentId2FeaturesKHR:
            return compare_VkPhysicalDevicePresentId2FeaturesKHR(a, b)
        case VkPhysicalDevicePresentWaitFeaturesKHR:
            return compare_VkPhysicalDevicePresentWaitFeaturesKHR(a, b)
        case VkPhysicalDevicePresentWait2FeaturesKHR:
            return compare_VkPhysicalDevicePresentWait2FeaturesKHR(a, b)
        case VkPhysicalDevicePresentTimingFeaturesEXT:
            return compare_VkPhysicalDevicePresentTimingFeaturesEXT(a, b)
        case VkPhysicalDevice16BitStorageFeatures:
            return compare_VkPhysicalDevice16BitStorageFeatures(a, b)
        case VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures:
            return compare_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(a, b)
        case VkPhysicalDeviceSamplerYcbcrConversionFeatures:
            return compare_VkPhysicalDeviceSamplerYcbcrConversionFeatures(a, b)
        case VkPhysicalDeviceProtectedMemoryFeatures:
            return compare_VkPhysicalDeviceProtectedMemoryFeatures(a, b)
        case VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT:
            return compare_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(a, b)
        case VkPhysicalDeviceMultiDrawFeaturesEXT:
            return compare_VkPhysicalDeviceMultiDrawFeaturesEXT(a, b)
        case VkPhysicalDeviceInlineUniformBlockFeatures:
            return compare_VkPhysicalDeviceInlineUniformBlockFeatures(a, b)
        case VkPhysicalDeviceMaintenance4Features:
            return compare_VkPhysicalDeviceMaintenance4Features(a, b)
        case VkPhysicalDeviceMaintenance5Features:
            return compare_VkPhysicalDeviceMaintenance5Features(a, b)
        case VkPhysicalDeviceMaintenance6Features:
            return compare_VkPhysicalDeviceMaintenance6Features(a, b)
        case VkPhysicalDeviceMaintenance7FeaturesKHR:
            return compare_VkPhysicalDeviceMaintenance7FeaturesKHR(a, b)
        case VkPhysicalDeviceMaintenance8FeaturesKHR:
            return compare_VkPhysicalDeviceMaintenance8FeaturesKHR(a, b)
        case VkPhysicalDeviceMaintenance9FeaturesKHR:
            return compare_VkPhysicalDeviceMaintenance9FeaturesKHR(a, b)
        case VkPhysicalDeviceMaintenance11FeaturesKHR:
            return compare_VkPhysicalDeviceMaintenance11FeaturesKHR(a, b)
        case VkPhysicalDeviceMaintenance10FeaturesKHR:
            return compare_VkPhysicalDeviceMaintenance10FeaturesKHR(a, b)
        case VkPhysicalDeviceShaderDrawParametersFeatures:
            return compare_VkPhysicalDeviceShaderDrawParametersFeatures(a, b)
        case VkPhysicalDeviceShaderFloat16Int8Features:
            return compare_VkPhysicalDeviceShaderFloat16Int8Features(a, b)
        case VkPhysicalDeviceHostQueryResetFeatures:
            return compare_VkPhysicalDeviceHostQueryResetFeatures(a, b)
        case VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM:
            return compare_VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM(a, b)
        case VkPhysicalDeviceGlobalPriorityQueryFeatures:
            return compare_VkPhysicalDeviceGlobalPriorityQueryFeatures(a, b)
        case VkPhysicalDeviceDeviceMemoryReportFeaturesEXT:
            return compare_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(a, b)
        case VkPhysicalDeviceDescriptorIndexingFeatures:
            return compare_VkPhysicalDeviceDescriptorIndexingFeatures(a, b)
        case VkPhysicalDeviceTimelineSemaphoreFeatures:
            return compare_VkPhysicalDeviceTimelineSemaphoreFeatures(a, b)
        case VkPhysicalDevice8BitStorageFeatures:
            return compare_VkPhysicalDevice8BitStorageFeatures(a, b)
        case VkPhysicalDeviceConditionalRenderingFeaturesEXT:
            return compare_VkPhysicalDeviceConditionalRenderingFeaturesEXT(a, b)
        case VkPhysicalDeviceVulkanMemoryModelFeatures:
            return compare_VkPhysicalDeviceVulkanMemoryModelFeatures(a, b)
        case VkPhysicalDeviceShaderAtomicInt64Features:
            return compare_VkPhysicalDeviceShaderAtomicInt64Features(a, b)
        case VkPhysicalDeviceShaderAtomicFloatFeaturesEXT:
            return compare_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(a, b)
        case VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT:
            return compare_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(a, b)
        case VkPhysicalDeviceVertexAttributeDivisorFeatures:
            return compare_VkPhysicalDeviceVertexAttributeDivisorFeatures(a, b)
        case VkPhysicalDeviceASTCDecodeFeaturesEXT:
            return compare_VkPhysicalDeviceASTCDecodeFeaturesEXT(a, b)
        case VkPhysicalDeviceTransformFeedbackFeaturesEXT:
            return compare_VkPhysicalDeviceTransformFeedbackFeaturesEXT(a, b)
        case VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV:
            return compare_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(a, b)
        case VkPhysicalDeviceExclusiveScissorFeaturesNV:
            return compare_VkPhysicalDeviceExclusiveScissorFeaturesNV(a, b)
        case VkPhysicalDeviceCornerSampledImageFeaturesNV:
            return compare_VkPhysicalDeviceCornerSampledImageFeaturesNV(a, b)
        case VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR:
            return compare_VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR(a, b)
        case VkPhysicalDeviceShaderImageFootprintFeaturesNV:
            return compare_VkPhysicalDeviceShaderImageFootprintFeaturesNV(a, b)
        case VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV:
            return compare_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(a, b)
        case VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR:
            return compare_VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR(a, b)
        case VkPhysicalDeviceCopyMemoryIndirectFeaturesNV:
            return compare_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(a, b)
        case VkPhysicalDeviceMemoryDecompressionFeaturesEXT:
            return compare_VkPhysicalDeviceMemoryDecompressionFeaturesEXT(a, b)
        case VkPhysicalDeviceShadingRateImageFeaturesNV:
            return compare_VkPhysicalDeviceShadingRateImageFeaturesNV(a, b)
        case VkPhysicalDeviceInvocationMaskFeaturesHUAWEI:
            return compare_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(a, b)
        case VkPhysicalDeviceMeshShaderFeaturesNV:
            return compare_VkPhysicalDeviceMeshShaderFeaturesNV(a, b)
        case VkPhysicalDeviceMeshShaderFeaturesEXT:
            return compare_VkPhysicalDeviceMeshShaderFeaturesEXT(a, b)
        case VkPhysicalDeviceAccelerationStructureFeaturesKHR:
            return compare_VkPhysicalDeviceAccelerationStructureFeaturesKHR(a, b)
        case VkPhysicalDeviceRayTracingPipelineFeaturesKHR:
            return compare_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(a, b)
        case VkPhysicalDeviceRayQueryFeaturesKHR:
            return compare_VkPhysicalDeviceRayQueryFeaturesKHR(a, b)
        case VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR:
            return compare_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(a, b)
        case VkPhysicalDeviceFragmentDensityMapFeaturesEXT:
            return compare_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(a, b)
        case VkPhysicalDeviceFragmentDensityMap2FeaturesEXT:
            return compare_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(a, b)
        case VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT:
            return compare_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT(a, b)
        case VkPhysicalDeviceScalarBlockLayoutFeatures:
            return compare_VkPhysicalDeviceScalarBlockLayoutFeatures(a, b)
        case VkPhysicalDeviceUniformBufferStandardLayoutFeatures:
            return compare_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(a, b)
        case VkPhysicalDeviceDepthClipEnableFeaturesEXT:
            return compare_VkPhysicalDeviceDepthClipEnableFeaturesEXT(a, b)
        case VkPhysicalDeviceMemoryPriorityFeaturesEXT:
            return compare_VkPhysicalDeviceMemoryPriorityFeaturesEXT(a, b)
        case VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT:
            return compare_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(a, b)
        case VkPhysicalDeviceBufferDeviceAddressFeatures:
            return compare_VkPhysicalDeviceBufferDeviceAddressFeatures(a, b)
        case VkPhysicalDeviceBufferDeviceAddressFeaturesEXT:
            return compare_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(a, b)
        case VkPhysicalDeviceImagelessFramebufferFeatures:
            return compare_VkPhysicalDeviceImagelessFramebufferFeatures(a, b)
        case VkPhysicalDeviceTextureCompressionASTCHDRFeatures:
            return compare_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(a, b)
        case VkPhysicalDeviceCooperativeMatrixFeaturesNV:
            return compare_VkPhysicalDeviceCooperativeMatrixFeaturesNV(a, b)
        case VkPhysicalDeviceYcbcrImageArraysFeaturesEXT:
            return compare_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(a, b)
        case VkPhysicalDevicePresentBarrierFeaturesNV:
            return compare_VkPhysicalDevicePresentBarrierFeaturesNV(a, b)
        case VkPhysicalDevicePerformanceQueryFeaturesKHR:
            return compare_VkPhysicalDevicePerformanceQueryFeaturesKHR(a, b)
        case VkPhysicalDeviceCoverageReductionModeFeaturesNV:
            return compare_VkPhysicalDeviceCoverageReductionModeFeaturesNV(a, b)
        case VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL:
            return compare_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(a, b)
        case VkPhysicalDeviceShaderClockFeaturesKHR:
            return compare_VkPhysicalDeviceShaderClockFeaturesKHR(a, b)
        case VkPhysicalDeviceIndexTypeUint8Features:
            return compare_VkPhysicalDeviceIndexTypeUint8Features(a, b)
        case VkPhysicalDeviceShaderSMBuiltinsFeaturesNV:
            return compare_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(a, b)
        case VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT:
            return compare_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(a, b)
        case VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures:
            return compare_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(a, b)
        case VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT:
            return compare_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(a, b)
        case VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR:
            return compare_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(a, b)
        case VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures:
            return compare_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(a, b)
        case VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT:
            return compare_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(a, b)
        case VkPhysicalDeviceSubgroupSizeControlFeatures:
            return compare_VkPhysicalDeviceSubgroupSizeControlFeatures(a, b)
        case VkPhysicalDeviceLineRasterizationFeatures:
            return compare_VkPhysicalDeviceLineRasterizationFeatures(a, b)
        case VkPhysicalDevicePipelineCreationCacheControlFeatures:
            return compare_VkPhysicalDevicePipelineCreationCacheControlFeatures(a, b)
        case VkPhysicalDeviceVulkan11Features:
            return compare_VkPhysicalDeviceVulkan11Features(a, b)
        case VkPhysicalDeviceVulkan12Features:
            return compare_VkPhysicalDeviceVulkan12Features(a, b)
        case VkPhysicalDeviceVulkan13Features:
            return compare_VkPhysicalDeviceVulkan13Features(a, b)
        case VkPhysicalDeviceVulkan14Features:
            return compare_VkPhysicalDeviceVulkan14Features(a, b)
        case VkPhysicalDeviceCoherentMemoryFeaturesAMD:
            return compare_VkPhysicalDeviceCoherentMemoryFeaturesAMD(a, b)
        case VkPhysicalDeviceGpaFeaturesAMD:
            return compare_VkPhysicalDeviceGpaFeaturesAMD(a, b)
        case VkPhysicalDeviceCustomBorderColorFeaturesEXT:
            return compare_VkPhysicalDeviceCustomBorderColorFeaturesEXT(a, b)
        case VkPhysicalDeviceBorderColorSwizzleFeaturesEXT:
            return compare_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(a, b)
        case VkPhysicalDeviceExtendedDynamicStateFeaturesEXT:
            return compare_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(a, b)
        case VkPhysicalDeviceExtendedDynamicState2FeaturesEXT:
            return compare_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(a, b)
        case VkPhysicalDeviceExtendedDynamicState3FeaturesEXT:
            return compare_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(a, b)
        case VkPhysicalDeviceExtendedFlagsFeaturesKHR:
            return compare_VkPhysicalDeviceExtendedFlagsFeaturesKHR(a, b)
        case VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV:
            return compare_VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV(a, b)
        case VkPhysicalDeviceDiagnosticsConfigFeaturesNV:
            return compare_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(a, b)
        case VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures:
            return compare_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(a, b)
        case VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR:
            return compare_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(a, b)
        case VkPhysicalDeviceRobustness2FeaturesKHR:
            return compare_VkPhysicalDeviceRobustness2FeaturesKHR(a, b)
        case VkPhysicalDeviceImageRobustnessFeatures:
            return compare_VkPhysicalDeviceImageRobustnessFeatures(a, b)
        case VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR:
            return compare_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(a, b)
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkPhysicalDevicePortabilitySubsetFeaturesKHR:
            return compare_VkPhysicalDevicePortabilitySubsetFeaturesKHR(a, b)
#endif
        case VkPhysicalDevice4444FormatsFeaturesEXT:
            return compare_VkPhysicalDevice4444FormatsFeaturesEXT(a, b)
        case VkPhysicalDeviceSubpassShadingFeaturesHUAWEI:
            return compare_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(a, b)
        case VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI:
            return compare_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(a, b)
        case VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT:
            return compare_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(a, b)
        case VkPhysicalDeviceFragmentShadingRateFeaturesKHR:
            return compare_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(a, b)
        case VkPhysicalDeviceShaderTerminateInvocationFeatures:
            return compare_VkPhysicalDeviceShaderTerminateInvocationFeatures(a, b)
        case VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV:
            return compare_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(a, b)
        case VkPhysicalDeviceImage2DViewOf3DFeaturesEXT:
            return compare_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(a, b)
        case VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT:
            return compare_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(a, b)
        case VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT:
            return compare_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(a, b)
        case VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT:
            return compare_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT(a, b)
        case VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT:
            return compare_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(a, b)
        case VkPhysicalDeviceDepthClipControlFeaturesEXT:
            return compare_VkPhysicalDeviceDepthClipControlFeaturesEXT(a, b)
        case VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT:
            return compare_VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT(a, b)
        case VkPhysicalDeviceCustomResolveFeaturesEXT:
            return compare_VkPhysicalDeviceCustomResolveFeaturesEXT(a, b)
        case VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT:
            return compare_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT(a, b)
        case VkPhysicalDeviceDepthClampControlFeaturesEXT:
            return compare_VkPhysicalDeviceDepthClampControlFeaturesEXT(a, b)
        case VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT:
            return compare_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(a, b)
        case VkPhysicalDeviceExternalMemoryRDMAFeaturesNV:
            return compare_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(a, b)
        case VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR:
            return compare_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR(a, b)
        case VkPhysicalDeviceColorWriteEnableFeaturesEXT:
            return compare_VkPhysicalDeviceColorWriteEnableFeaturesEXT(a, b)
        case VkPhysicalDeviceSynchronization2Features:
            return compare_VkPhysicalDeviceSynchronization2Features(a, b)
        case VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR:
            return compare_VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR(a, b)
        case VkPhysicalDeviceHostImageCopyFeatures:
            return compare_VkPhysicalDeviceHostImageCopyFeatures(a, b)
        case VkPhysicalDeviceVulkanSC10Features:
            return compare_VkPhysicalDeviceVulkanSC10Features(a, b)
        case VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT:
            return compare_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(a, b)
        case VkPhysicalDeviceLegacyDitheringFeaturesEXT:
            return compare_VkPhysicalDeviceLegacyDitheringFeaturesEXT(a, b)
        case VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT:
            return compare_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(a, b)
        case VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT:
            return compare_VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT(a, b)
        case VkPhysicalDevicePipelineProtectedAccessFeatures:
            return compare_VkPhysicalDevicePipelineProtectedAccessFeatures(a, b)
        case VkPhysicalDeviceVideoMaintenance1FeaturesKHR:
            return compare_VkPhysicalDeviceVideoMaintenance1FeaturesKHR(a, b)
        case VkPhysicalDeviceVideoMaintenance2FeaturesKHR:
            return compare_VkPhysicalDeviceVideoMaintenance2FeaturesKHR(a, b)
        case VkPhysicalDeviceVideoDecodeVP9FeaturesKHR:
            return compare_VkPhysicalDeviceVideoDecodeVP9FeaturesKHR(a, b)
        case VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR:
            return compare_VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR(a, b)
        case VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR:
            return compare_VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR(a, b)
        case VkPhysicalDeviceVideoEncodeAV1FeaturesKHR:
            return compare_VkPhysicalDeviceVideoEncodeAV1FeaturesKHR(a, b)
        case VkPhysicalDeviceInheritedViewportScissorFeaturesNV:
            return compare_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(a, b)
        case VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT:
            return compare_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(a, b)
        case VkPhysicalDeviceProvokingVertexFeaturesEXT:
            return compare_VkPhysicalDeviceProvokingVertexFeaturesEXT(a, b)
        case VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR:
            return compare_VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR(a, b)
        case VkPhysicalDeviceDescriptorBufferFeaturesEXT:
            return compare_VkPhysicalDeviceDescriptorBufferFeaturesEXT(a, b)
        case VkPhysicalDeviceShaderIntegerDotProductFeatures:
            return compare_VkPhysicalDeviceShaderIntegerDotProductFeatures(a, b)
        case VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR:
            return compare_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(a, b)
        case VkPhysicalDeviceShaderFmaFeaturesKHR:
            return compare_VkPhysicalDeviceShaderFmaFeaturesKHR(a, b)
        case VkPhysicalDeviceRayTracingMotionBlurFeaturesNV:
            return compare_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(a, b)
        case VkPhysicalDeviceRayTracingValidationFeaturesNV:
            return compare_VkPhysicalDeviceRayTracingValidationFeaturesNV(a, b)
        case VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV:
            return compare_VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV(a, b)
        case VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT:
            return compare_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(a, b)
        case VkPhysicalDeviceDynamicRenderingFeatures:
            return compare_VkPhysicalDeviceDynamicRenderingFeatures(a, b)
        case VkPhysicalDeviceImageViewMinLodFeaturesEXT:
            return compare_VkPhysicalDeviceImageViewMinLodFeaturesEXT(a, b)
        case VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT:
            return compare_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(a, b)
        case VkPhysicalDeviceLinearColorAttachmentFeaturesNV:
            return compare_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(a, b)
        case VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT:
            return compare_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(a, b)
        case VkPhysicalDevicePipelineBinaryFeaturesKHR:
            return compare_VkPhysicalDevicePipelineBinaryFeaturesKHR(a, b)
        case VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM:
            return compare_VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM(a, b)
        case VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE:
            return compare_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(a, b)
        case VkPhysicalDeviceNestedCommandBufferFeaturesEXT:
            return compare_VkPhysicalDeviceNestedCommandBufferFeaturesEXT(a, b)
        case VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT:
            return compare_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(a, b)
        case VkPhysicalDeviceImageCompressionControlFeaturesEXT:
            return compare_VkPhysicalDeviceImageCompressionControlFeaturesEXT(a, b)
        case VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT:
            return compare_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(a, b)
        case VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT:
            return compare_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(a, b)
        case VkPhysicalDeviceOpacityMicromapFeaturesKHR:
            return compare_VkPhysicalDeviceOpacityMicromapFeaturesKHR(a, b)
        case VkPhysicalDeviceOpacityMicromapFeaturesEXT:
            return compare_VkPhysicalDeviceOpacityMicromapFeaturesEXT(a, b)
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkPhysicalDeviceDisplacementMicromapFeaturesNV:
            return compare_VkPhysicalDeviceDisplacementMicromapFeaturesNV(a, b)
#endif
        case VkPhysicalDevicePipelinePropertiesFeaturesEXT:
            return compare_VkPhysicalDevicePipelinePropertiesFeaturesEXT(a, b)
        case VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD:
            return compare_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(a, b)
        case VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT:
            return compare_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(a, b)
        case VkPhysicalDevicePipelineRobustnessFeatures:
            return compare_VkPhysicalDevicePipelineRobustnessFeatures(a, b)
        case VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM:
            return compare_VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM(a, b)
        case VkPhysicalDeviceImageProcessingFeaturesQCOM:
            return compare_VkPhysicalDeviceImageProcessingFeaturesQCOM(a, b)
        case VkPhysicalDeviceTilePropertiesFeaturesQCOM:
            return compare_VkPhysicalDeviceTilePropertiesFeaturesQCOM(a, b)
        case VkPhysicalDeviceAmigoProfilingFeaturesSEC:
            return compare_VkPhysicalDeviceAmigoProfilingFeaturesSEC(a, b)
        case VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT:
            return compare_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(a, b)
        case VkPhysicalDeviceAddressBindingReportFeaturesEXT:
            return compare_VkPhysicalDeviceAddressBindingReportFeaturesEXT(a, b)
        case VkPhysicalDeviceOpticalFlowFeaturesNV:
            return compare_VkPhysicalDeviceOpticalFlowFeaturesNV(a, b)
        case VkPhysicalDeviceFaultFeaturesEXT:
            return compare_VkPhysicalDeviceFaultFeaturesEXT(a, b)
        case VkPhysicalDeviceFaultFeaturesKHR:
            return compare_VkPhysicalDeviceFaultFeaturesKHR(a, b)
        case VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT:
            return compare_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(a, b)
        case VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM:
            return compare_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(a, b)
        case VkPhysicalDeviceFrameBoundaryFeaturesEXT:
            return compare_VkPhysicalDeviceFrameBoundaryFeaturesEXT(a, b)
        case VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT:
            return compare_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(a, b)
        case VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR:
            return compare_VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR(a, b)
        case VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR:
            return compare_VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR(a, b)
        case VkPhysicalDeviceDepthBiasControlFeaturesEXT:
            return compare_VkPhysicalDeviceDepthBiasControlFeaturesEXT(a, b)
        case VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT:
            return compare_VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT(a, b)
        case VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV:
            return compare_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(a, b)
        case VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV:
            return compare_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(a, b)
        case VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM:
            return compare_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(a, b)
        case VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR:
            return compare_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(a, b)
        case VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM:
            return compare_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(a, b)
        case VkPhysicalDeviceShaderObjectFeaturesEXT:
            return compare_VkPhysicalDeviceShaderObjectFeaturesEXT(a, b)
        case VkPhysicalDeviceShaderTileImageFeaturesEXT:
            return compare_VkPhysicalDeviceShaderTileImageFeaturesEXT(a, b)
        case VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX:
            return compare_VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX(a, b)
        case VkPhysicalDeviceCooperativeMatrixFeaturesKHR:
            return compare_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(a, b)
        case VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM:
            return compare_VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM(a, b)
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkPhysicalDeviceShaderEnqueueFeaturesAMDX:
            return compare_VkPhysicalDeviceShaderEnqueueFeaturesAMDX(a, b)
#endif
        case VkPhysicalDeviceAntiLagFeaturesAMD:
            return compare_VkPhysicalDeviceAntiLagFeaturesAMD(a, b)
        case VkPhysicalDeviceTileMemoryHeapFeaturesQCOM:
            return compare_VkPhysicalDeviceTileMemoryHeapFeaturesQCOM(a, b)
        case VkPhysicalDeviceCubicClampFeaturesQCOM:
            return compare_VkPhysicalDeviceCubicClampFeaturesQCOM(a, b)
        case VkPhysicalDeviceYcbcrDegammaFeaturesQCOM:
            return compare_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(a, b)
        case VkPhysicalDeviceCubicWeightsFeaturesQCOM:
            return compare_VkPhysicalDeviceCubicWeightsFeaturesQCOM(a, b)
        case VkPhysicalDeviceImageProcessing2FeaturesQCOM:
            return compare_VkPhysicalDeviceImageProcessing2FeaturesQCOM(a, b)
        case VkPhysicalDeviceImageProcessing3FeaturesQCOM:
            return compare_VkPhysicalDeviceImageProcessing3FeaturesQCOM(a, b)
        case VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV:
            return compare_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(a, b)
        case VkPhysicalDevicePerStageDescriptorSetFeaturesNV:
            return compare_VkPhysicalDevicePerStageDescriptorSetFeaturesNV(a, b)
        case VkPhysicalDeviceExternalFormatResolveFeaturesANDROID:
            return compare_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID(a, b)
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkPhysicalDeviceCudaKernelLaunchFeaturesNV:
            return compare_VkPhysicalDeviceCudaKernelLaunchFeaturesNV(a, b)
#endif
        case VkPhysicalDeviceSchedulingControlsFeaturesARM:
            return compare_VkPhysicalDeviceSchedulingControlsFeaturesARM(a, b)
        case VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG:
            return compare_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG(a, b)
        case VkPhysicalDeviceRenderPassStripedFeaturesARM:
            return compare_VkPhysicalDeviceRenderPassStripedFeaturesARM(a, b)
        case VkPhysicalDevicePipelineOpacityMicromapFeaturesARM:
            return compare_VkPhysicalDevicePipelineOpacityMicromapFeaturesARM(a, b)
        case VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR:
            return compare_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR(a, b)
        case VkPhysicalDeviceShaderSubgroupRotateFeatures:
            return compare_VkPhysicalDeviceShaderSubgroupRotateFeatures(a, b)
        case VkPhysicalDeviceShaderExpectAssumeFeatures:
            return compare_VkPhysicalDeviceShaderExpectAssumeFeatures(a, b)
        case VkPhysicalDeviceShaderFloatControls2Features:
            return compare_VkPhysicalDeviceShaderFloatControls2Features(a, b)
        case VkPhysicalDeviceDynamicRenderingLocalReadFeatures:
            return compare_VkPhysicalDeviceDynamicRenderingLocalReadFeatures(a, b)
        case VkPhysicalDeviceShaderQuadControlFeaturesKHR:
            return compare_VkPhysicalDeviceShaderQuadControlFeaturesKHR(a, b)
        case VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV:
            return compare_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV(a, b)
        case VkPhysicalDeviceMapMemoryPlacedFeaturesEXT:
            return compare_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT(a, b)
        case VkPhysicalDeviceShaderBfloat16FeaturesKHR:
            return compare_VkPhysicalDeviceShaderBfloat16FeaturesKHR(a, b)
        case VkPhysicalDeviceRawAccessChainsFeaturesNV:
            return compare_VkPhysicalDeviceRawAccessChainsFeaturesNV(a, b)
        case VkPhysicalDeviceCommandBufferInheritanceFeaturesNV:
            return compare_VkPhysicalDeviceCommandBufferInheritanceFeaturesNV(a, b)
        case VkPhysicalDeviceImageAlignmentControlFeaturesMESA:
            return compare_VkPhysicalDeviceImageAlignmentControlFeaturesMESA(a, b)
        case VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT:
            return compare_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT(a, b)
        case VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR:
            return compare_VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR(a, b)
        case VkPhysicalDeviceCooperativeMatrix2FeaturesNV:
            return compare_VkPhysicalDeviceCooperativeMatrix2FeaturesNV(a, b)
        case VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV:
            return compare_VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV(a, b)
        case VkPhysicalDeviceHdrVividFeaturesHUAWEI:
            return compare_VkPhysicalDeviceHdrVividFeaturesHUAWEI(a, b)
        case VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT:
            return compare_VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT(a, b)
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkPhysicalDeviceDenseGeometryFormatFeaturesAMDX:
            return compare_VkPhysicalDeviceDenseGeometryFormatFeaturesAMDX(a, b)
#endif
        case VkPhysicalDeviceDepthClampZeroOneFeaturesKHR:
            return compare_VkPhysicalDeviceDepthClampZeroOneFeaturesKHR(a, b)
        case VkPhysicalDeviceCooperativeVectorFeaturesNV:
            return compare_VkPhysicalDeviceCooperativeVectorFeaturesNV(a, b)
        case VkPhysicalDeviceTileShadingFeaturesQCOM:
            return compare_VkPhysicalDeviceTileShadingFeaturesQCOM(a, b)
        case VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE:
            return compare_VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE(a, b)
        case VkPhysicalDevicePresentMeteringFeaturesNV:
            return compare_VkPhysicalDevicePresentMeteringFeaturesNV(a, b)
        case VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT:
            return compare_VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT(a, b)
        case VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE:
            return compare_VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE(a, b)
        case VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT:
            return compare_VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT(a, b)
        case VkPhysicalDeviceFormatPackFeaturesARM:
            return compare_VkPhysicalDeviceFormatPackFeaturesARM(a, b)
        case VkPhysicalDeviceThrottleHintFeaturesSEC:
            return compare_VkPhysicalDeviceThrottleHintFeaturesSEC(a, b)
        case VkPhysicalDeviceTensorFeaturesARM:
            return compare_VkPhysicalDeviceTensorFeaturesARM(a, b)
        case VkPhysicalDeviceDescriptorBufferTensorFeaturesARM:
            return compare_VkPhysicalDeviceDescriptorBufferTensorFeaturesARM(a, b)
        case VkPhysicalDeviceShaderFloat8FeaturesEXT:
            return compare_VkPhysicalDeviceShaderFloat8FeaturesEXT(a, b)
        case VkPhysicalDeviceDataGraphFeaturesARM:
            return compare_VkPhysicalDeviceDataGraphFeaturesARM(a, b)
        case VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC:
            return compare_VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC(a, b)
        case VkPhysicalDeviceDataGraphModelFeaturesQCOM:
            return compare_VkPhysicalDeviceDataGraphModelFeaturesQCOM(a, b)
        case VkPhysicalDeviceShaderUntypedPointersFeaturesKHR:
            return compare_VkPhysicalDeviceShaderUntypedPointersFeaturesKHR(a, b)
        case VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE:
            return compare_VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE(a, b)
        case VkPhysicalDeviceShader64BitIndexingFeaturesEXT:
            return compare_VkPhysicalDeviceShader64BitIndexingFeaturesEXT(a, b)
        case VkPhysicalDeviceQueuePerfHintFeaturesQCOM:
            return compare_VkPhysicalDeviceQueuePerfHintFeaturesQCOM(a, b)
        case VkPhysicalDevicePerformanceCountersByRegionFeaturesARM:
            return compare_VkPhysicalDevicePerformanceCountersByRegionFeaturesARM(a, b)
        case VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV:
            return compare_VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV(a, b)
        case VkPhysicalDeviceShaderLongVectorFeaturesEXT:
            return compare_VkPhysicalDeviceShaderLongVectorFeaturesEXT(a, b)
        case VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT:
            return compare_VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT(a, b)
        case VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT:
            return compare_VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT(a, b)
        case VkPhysicalDeviceShaderSplitBarrierFeaturesEXT:
            return compare_VkPhysicalDeviceShaderSplitBarrierFeaturesEXT(a, b)
        case VkPhysicalDeviceDescriptorHeapFeaturesEXT:
            return compare_VkPhysicalDeviceDescriptorHeapFeaturesEXT(a, b)
        case VkPhysicalDeviceShaderInstrumentationFeaturesARM:
            return compare_VkPhysicalDeviceShaderInstrumentationFeaturesARM(a, b)
        case VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR:
            return compare_VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR(a, b)
        case VkPhysicalDeviceShaderConstantDataFeaturesKHR:
            return compare_VkPhysicalDeviceShaderConstantDataFeaturesKHR(a, b)
        case VkPhysicalDeviceShaderAbortFeaturesKHR:
            return compare_VkPhysicalDeviceShaderAbortFeaturesKHR(a, b)
        case VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM:
            return compare_VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM(a, b)
        case VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT:
            return compare_VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT(a, b)
    }
    return false;
}

