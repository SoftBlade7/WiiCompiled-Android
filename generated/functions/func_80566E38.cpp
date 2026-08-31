#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80566E38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r7_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80566E38;

loc_80566E38:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r8 = 1127219200;
    r5 = 0x80380000u;
    r7 = 0x802A0000u;
    r0 = MemoryInline::FlatRead32((r5 + 28432));
    r5 = 0x80890000u;
    f6.d = MemoryInline::FlatReadFloat32((r5 + 5416));
    r6 = 0x80890000u;
    r9 = (r0 * 12);
    r7 = (r7 + 16104);
    r0 = (r4 + -3);
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    f3.d = MemoryInline::FlatReadFloat64((r6 + 5424));
    f1.d = f6.d;
    r5 = (r7 + r9);
    r7_addr_0 = (r7 + r9);
    r7 = MemoryInline::FlatRead16(r7_addr_0);
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80566E80:
{
    r5 = MemoryInline::FlatRead16((r5 + 2));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r8);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80566F10;
    }
}

loc_80566EA0:
{
    r6 = MemoryInline::FlatRead32((r3 + 104));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r4 = (r4_rot_0 & 32767);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 32767);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r0 = (r6 & 1);
    r4 = (r0 ^ r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r5 + r6);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r4 = (r4 - r5);
    r5 = 0x80890000u;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    f2.d = MemoryInline::FlatReadFloat64((r5 + 5432));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = (r0 ^ -2147483648);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f6.d = PpcFmulsInline(f4.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f0.d);
    goto loc_80566F48;
}

loc_80566F10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_80566F14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80566F48;
    }
}

loc_80566F18:
{
    r0 = MemoryInline::FlatRead32((r3 + 104));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r4 = (r4_rot_2 & 32767);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r4 = 0x80890000u;
    r0 = (r0 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r4 + 5432));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = PpcFmulsInline(f5.d, f0.d);
}

loc_80566F48:
{
    r0 = MemoryInline::FlatRead16((r3 + 52));
    MemoryInline::FlatWriteFloat32((r3 + 64), f6.d);
    r0 = (r0 | 1);
    MemoryInline::FlatWriteFloat32((r3 + 68), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    MemoryInline::FlatWrite16((r3 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 12), f5.d);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000003F3 gpr_return=0x00000010 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80566E38 func_80566E38 preserves=true fpr_mask=0x00000000
