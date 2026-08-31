#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001B99C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001B99C;

loc_8001B99C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r4 = (r4_rot_0 & 2047);
    r7 = (r4 + -1023);
}

loc_8001B9B8:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(20))) {
        goto loc_8001BA28;
    }
}

loc_8001B9BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8001B9C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001B9D8;
    }
}

loc_8001B9C4:
{
    r4 = (r5 & -2147483648);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_8001BA90;
}

loc_8001B9D8:
{
    r4 = 1048576;
    r0 = (r4 + -1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r0 = (r5 & r4);
    r0 = (r6 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001BA0C;
    }
}

loc_8001B9F0:
{
    r4 = (r5 & -2147483648);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteFloat64(r3, f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    goto loc_8001BA90;
}

loc_8001BA0C:
{
    r4 = (r5 & ~r4);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    f0.d = MemoryInline::FlatReadFloat64(r3);
    f1.d = (f1.d - f0.d);
    goto loc_8001BA90;
}

loc_8001BA28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(51));
}

loc_8001BA2C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001BA4C;
    }
}

loc_8001BA30:
{
    r4 = (r5 & -2147483648);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteFloat64(r3, f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    goto loc_8001BA90;
}

loc_8001BA4C:
{
    r0 = (r7 + -20);
    r4 = -1;
    r4 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r6 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001BA7C;
    }
}

loc_8001BA60:
{
    r4 = (r5 & -2147483648);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteFloat64(r3, f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    goto loc_8001BA90;
}

loc_8001BA7C:
{
    r0 = (r6 & ~r4);
    MemoryInline::FlatWrite32(r3, r5);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    f0.d = MemoryInline::FlatReadFloat64(r3);
    f1.d = (f1.d - f0.d);
}

loc_8001BA90:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000EA gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001B99C func_8001B99C preserves=true fpr_mask=0x00000000
