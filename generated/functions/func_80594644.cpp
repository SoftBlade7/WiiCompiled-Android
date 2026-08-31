#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80594644(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_80594674_loc_0 = 0;
    uint32_t addr_lhax_805946D8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80594644;

loc_80594644:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = MemoryInline::FlatRead32((r3 + 144));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80594650:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805946EC;
    }
}

loc_80594654:
{
    r6 = MemoryInline::FlatRead16((r3 + 148));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = 1127219200;
    r4 = 0x808B0000u;
    r7 = 0x80890000u;
    r6 = (r6 + 1);
    MemoryInline::FlatWrite16((r3 + 148), static_cast<uint16_t>(r6));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = (r4 + 25896);
    addr_lhax_80594674_loc_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_80594674_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r6 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    r0 = (r0 ^ -2147483648);
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    f3.d = MemoryInline::FlatReadFloat64((r7 + 7928));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 7924));
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 152), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805946BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805946C4;
    }
}

loc_805946C0:
{
    MemoryInline::FlatWriteFloat32((r3 + 152), f0.d);
}

loc_805946C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    r4 = 0x808B0000u;
    r4 = (r4 + 25896);
    r5 = MemoryInline::FlatRead16((r3 + 148));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    addr_lhax_805946D8_loc_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_805946D8_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_805946E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805946EC;
    }
}

loc_805946E4:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 144), r0);
}

loc_805946EC:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80594644 func_80594644 preserves=true fpr_mask=0x00000000
