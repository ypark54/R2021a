/* API for S-Functions and Stateflow to support unbounded variable-size signals in Simulink */
/* Copyright 2019-2020 The MathWorks, Inc. */

#ifdef SUPPORTS_PRAGMA_ONCE
#pragma once
#endif

#ifndef _sl_dynamicmatrix_sfcn_api_h_
#define _sl_dynamicmatrix_sfcn_api_h_

#include "sl_simtarget_instrumentation_spec.h"

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C DTypeId
ssRegisterDynamicMatrixDataType(SimStruct* S, DTypeId containedDataTypeId, size_t numDims);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C bool ssIsDynamicMatrixDataType(SimStruct* S,
                                                                            DTypeId dataTypeId);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void ssConstructDynamicMatrix(SimStruct* S,
                                                                           DTypeId dataTypeId,
                                                                           void* ioBufferSlot);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void ssDestructDynamicMatrix(SimStruct* S,
                                                                          DTypeId dataTypeId,
                                                                          void* ioBufferSlot);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void ssConstructDynamicMatrixData(SimStruct* S,
                                                                               DTypeId dataTypeId,
                                                                               size_t numDims,
                                                                               size_t* dims,
                                                                               size_t elementSize,
                                                                               const void* inData,
                                                                               void* ioBufferSlot);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C size_t
ssGetInputPortDynamicMatrixDataNumDims(SimStruct* S, int portIdx);
SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C size_t
ssGetOutputPortDynamicMatrixDataNumDims(SimStruct* S, int portIdx);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void ssGetInputPortDynamicMatrixDataDims(SimStruct* S,
                                                                                      int portIdx,
                                                                                      size_t* dims);
SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void ssGetOutputPortDynamicMatrixDataDims(
    SimStruct* S,
    int portIdx,

    size_t* dims);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C size_t
ssGetInputPortDynamicMatrixDataWidth(SimStruct* S, int portIdx);
SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C size_t
ssGetOutputPortDynamicMatrixDataWidth(SimStruct* S, int portIdx);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void
ssSetOutputPortDynamicMatrixDataDims(SimStruct* S, int portIdx, size_t numDims, const size_t* dims);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C const void* ssGetInputPortDynamicMatrixData(
    SimStruct* S,
    int portIdx);
SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void* ssGetOutputPortDynamicMatrixData(SimStruct* S,
                                                                                    int portIdx);

#endif /* _sl_dynamicmatrix_sfcn_api_h_ */
