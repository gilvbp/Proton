/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRCompositor_IVRCompositor_012.h"
struct u_IVRCompositor_IVRCompositor_012
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_0915 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
#endif /* __cplusplus */
};

void cppIVRCompositor_IVRCompositor_012_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_012_SetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_012_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_012_GetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_012_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_012_WaitGetPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_012_GetLastPoses( struct cppIVRCompositor_IVRCompositor_012_GetLastPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
}

void cppIVRCompositor_IVRCompositor_012_Submit( struct cppIVRCompositor_IVRCompositor_012_Submit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->Submit( params->eEye, params->pTexture, params->pBounds, params->nSubmitFlags );
}

void cppIVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_012_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_012_PostPresentHandoff_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->PostPresentHandoff(  );
}

void cppIVRCompositor_IVRCompositor_012_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_012_GetFrameTiming_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
}

void cppIVRCompositor_IVRCompositor_012_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_012_GetFrameTimeRemaining_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (float)iface->GetFrameTimeRemaining(  );
}

void cppIVRCompositor_IVRCompositor_012_FadeToColor( struct cppIVRCompositor_IVRCompositor_012_FadeToColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_012_FadeGrid( struct cppIVRCompositor_IVRCompositor_012_FadeGrid_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_012_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_012_SetSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetSkyboxOverride( params->pTextures, params->unTextureCount );
}

void cppIVRCompositor_IVRCompositor_012_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_012_ClearSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
}

void cppIVRCompositor_IVRCompositor_012_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_012_CompositorBringToFront_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_012_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_012_CompositorGoToBack_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_012_CompositorQuit( struct cppIVRCompositor_IVRCompositor_012_CompositorQuit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_012_IsFullscreen( struct cppIVRCompositor_IVRCompositor_012_IsFullscreen_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_012_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_012_GetLastFrameRenderer_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastFrameRenderer(  );
}

void cppIVRCompositor_IVRCompositor_012_CanRenderScene( struct cppIVRCompositor_IVRCompositor_012_CanRenderScene_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
}

void cppIVRCompositor_IVRCompositor_012_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_012_ShowMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->ShowMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_012_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_012_HideMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->HideMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_012_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_012_IsMirrorWindowVisible_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (bool)iface->IsMirrorWindowVisible(  );
}

void cppIVRCompositor_IVRCompositor_012_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_012_CompositorDumpImages_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->CompositorDumpImages(  );
}

void cppIVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources_params *params )
{
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (bool)iface->ShouldAppRenderWithLowResources(  );
}

