#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801759B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801759B8;

loc_801759B8:
{
    r6 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801759C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801759C4:
{
}

loc_801759C8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80175A0C;
    }
}

loc_801759CC:
{
    r0 = MemoryInline::FlatRead8((r6 + 92));
}

loc_801759D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801759F8;
    }
}

loc_801759D8:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_801759E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801759F8;
    }
}

loc_801759E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    goto loc_80175A0C;
}

loc_801759F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 32));
    r5 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 36));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_80175A0C:
{
    r7 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r6 = MemoryInline::FlatRead32(r7);
    MemoryInline::FlatWrite32((r3 + 20), r6);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r0 = MemoryInline::FlatRead8((r7 + 92));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80175A30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80175A34:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80175A3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80175A40:
{
    r0 = MemoryInline::FlatRead32((r7 + 96));
    r4 = MemoryInline::FlatRead32((r7 + 100));
    r5 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80175A4C:
{
    r5 = MemoryInline::FlatRead32((r7 + 104));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80175A5C;
    }
}

loc_80175A54:
{
    r6 = (r6 | 2048);
    MemoryInline::FlatWrite32((r3 + 20), r6);
}

loc_80175A5C:
{
    r6 = (r4 & 16);
}

loc_80175A60:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80175A70;
    }
}

loc_80175A64:
{
    r6 = MemoryInline::FlatRead32((r3 + 16));
    r6 = (r6 | 2048);
    MemoryInline::FlatWrite32((r3 + 16), r6);
}

loc_80175A70:
{
    r6 = (r5 & 16);
}

loc_80175A74:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80175A84;
    }
}

loc_80175A78:
{
    r6 = MemoryInline::FlatRead32((r3 + 24));
    r6 = (r6 | 2048);
    MemoryInline::FlatWrite32((r3 + 24), r6);
}

loc_80175A84:
{
    r6 = (r0 & 1024);
}

loc_80175A88:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80175A98;
    }
}

loc_80175A8C:
{
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r6 = (r6 | 16);
    MemoryInline::FlatWrite32((r3 + 20), r6);
}

loc_80175A98:
{
    r6 = (r4 & 1024);
}

loc_80175A9C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80175AAC;
    }
}

loc_80175AA0:
{
    r6 = MemoryInline::FlatRead32((r3 + 16));
    r6 = (r6 | 16);
    MemoryInline::FlatWrite32((r3 + 16), r6);
}

loc_80175AAC:
{
    r6 = (r5 & 1024);
}

loc_80175AB0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80175AC0;
    }
}

loc_80175AB4:
{
    r6 = MemoryInline::FlatRead32((r3 + 24));
    r6 = (r6 | 16);
    MemoryInline::FlatWrite32((r3 + 24), r6);
}

loc_80175AC0:
{
    r6 = (r0 & 4096);
}

loc_80175AC4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80175AD4;
    }
}

loc_80175AC8:
{
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r6 = (r6 | 4096);
    MemoryInline::FlatWrite32((r3 + 20), r6);
}

loc_80175AD4:
{
    r6 = (r4 & 4096);
}

loc_80175AD8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80175AE8;
    }
}

loc_80175ADC:
{
    r6 = MemoryInline::FlatRead32((r3 + 16));
    r6 = (r6 | 4096);
    MemoryInline::FlatWrite32((r3 + 16), r6);
}

loc_80175AE8:
{
    r6 = (r5 & 4096);
}

loc_80175AEC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80175AFC;
    }
}

loc_80175AF0:
{
    r6 = MemoryInline::FlatRead32((r3 + 24));
    r6 = (r6 | 4096);
    MemoryInline::FlatWrite32((r3 + 24), r6);
}

loc_80175AFC:
{
    r0 = (r0 & 2048);
}

loc_80175B00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80175B10;
    }
}

loc_80175B04:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_80175B10:
{
    r0 = (r4 & 2048);
}

loc_80175B14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80175B24;
    }
}

loc_80175B18:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_80175B24:
{
    r0 = (r5 & 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80175B28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80175B2C:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801759B8 func_801759B8 preserves=true fpr_mask=0x00000000
