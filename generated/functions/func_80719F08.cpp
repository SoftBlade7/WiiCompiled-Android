#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80719F08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r27 = ctx->gpr[27];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80719F08;

loc_80719F08:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r21)));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80719F2C;
    }
}

loc_80719F10:
{
}

loc_80719F14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80719F7C;
    }
}

loc_80719F18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80719F1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80719FCC;
    }
}

loc_80719F20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_80719F24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80719FE8;
    }
}

loc_80719F28:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80719F2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80719F30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80719F60;
    }
}

loc_80719F34:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r3 + -50);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80719F48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80719F60;
    }
}

loc_80719F4C:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 9008));
    r5 = 60;
    ctx->lr = 0x80719F60u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FAB2Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80719F60:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x80719F78u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80719F7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80719F80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80719FB0;
    }
}

loc_80719F84:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r3 + -50);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80719F98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80719FB0;
    }
}

loc_80719F9C:
{
    r3 = 0x809C0000u;
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 9008));
    r5 = 120;
    ctx->lr = 0x80719FB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FAB2Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80719FB0:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 52));
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x80719FC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80719FCC:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x80719FE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80719FE8:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x8071A000u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80719F08 func_80719F08 preserves=true fpr_mask=0x00000000
