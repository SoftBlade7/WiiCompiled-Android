#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80588888(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80588888;

loc_80588888:
{
    r0 = MemoryInline::FlatRead16((r3 + 252));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6 = 0x808B0000u;
    r6 = (r6 + 22768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80588898:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8058889C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805888A0:
{
    r8 = MemoryInline::FlatRead16((r6 + 978));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = MemoryInline::FlatRead16((r6 + 976));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805888AC:
{
    r5 = MemoryInline::FlatRead16((r3 + 254));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r5 = (r5 + r7);
    MemoryInline::FlatWrite16((r3 + 254), static_cast<uint16_t>(r5));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_805888C4:
{
    r0 = MemoryInline::FlatRead16((r6 + 984));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = MemoryInline::FlatRead16((r4 + 6368));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 988));
    r5 = r0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805888E0;
    }
}

loc_805888D8:
{
    r5 = r7;
    r7 = r0;
}

loc_805888E0:
{
    r4 = MemoryInline::FlatRead32(r3);
    f0.d = (-(f1.d));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 136));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805888F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80588908;
    }
}

loc_805888F8:
{
    r0 = MemoryInline::FlatRead16((r3 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 254), static_cast<uint16_t>(r0));
    goto loc_8058891C;
}

loc_80588908:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8058890C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8058891C;
    }
}

loc_80588910:
{
    r0 = MemoryInline::FlatRead16((r3 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 254), static_cast<uint16_t>(r0));
}

loc_8058891C:
{
    r0 = MemoryInline::FlatRead16((r3 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80588924:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_80588934;
    }
}

loc_80588928:
{
    MemoryInline::FlatWrite16((r3 + 254), static_cast<uint16_t>(r8));
    r0 = 1;
    goto loc_80588938;
}

loc_80588934:
{
    r0 = 0;
}

loc_80588938:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058893C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80588940:
{
    r4 = MemoryInline::FlatRead16((r3 + 252));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 252), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80588888 func_80588888 preserves=true fpr_mask=0x00000000
