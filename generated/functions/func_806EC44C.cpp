#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806EC44C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806EC44C;

loc_806EC44C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r5 = 0x808A0000u;
    r4 = 0x808C0000u;
    f4.d = MemoryInline::FlatReadFloat32((r3 + 1016));
    r5 = (r5 + 2512);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1012));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 30008));
    f3.d = std::fabs(f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_806EC478:
{
    MemoryInline::FlatWriteFloat32((r3 + 1012), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806EC4D0;
    }
}

loc_806EC480:
{
    f0.d = PPC_Fctiwz(f4.d);
    r4 = -1240793088;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r4 = (r4 + 24759);
    f1.d = MemoryInline::FlatReadFloat64((r5 + 56));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r4 + r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 360);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1016), f0.d);
}

loc_806EC4D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1016));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806EC4E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806EC4EC;
    }
}

loc_806EC4E4:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::FlatWriteFloat32((r3 + 1016), f0.d);
}

loc_806EC4EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1016));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806EC4F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806EC50C;
    }
}

loc_806EC4FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1016), f0.d);
    goto loc_806EC518;
}

loc_806EC50C:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1016), f0.d);
}

loc_806EC518:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x00000013 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806EC44C func_806EC44C preserves=true fpr_mask=0x00000000
