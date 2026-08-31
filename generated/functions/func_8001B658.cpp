#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001B658(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001B658;

loc_8001B658:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r3 = (r3_rot_0 & 2047);
    r7 = (r3 + -1023);
}

loc_8001B674:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(52))) {
        goto loc_8001B68C;
    }
}

loc_8001B678:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(20));
}

loc_8001B67C:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8001B730;
    }
}

loc_8001B680:
{
}

loc_8001B684:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_8001B6D8;
    }
}

loc_8001B688:
{
    goto loc_8001B698;
}

loc_8001B68C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1024));
}

loc_8001B690:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001B724;
    }
}

loc_8001B694:
{
    goto loc_8001B7A0;
}

loc_8001B698:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31272));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31264));
    f1.d = (f2.d + f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8001B6A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001B794;
    }
}

loc_8001B6AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8001B6B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8001B6C0;
    }
}

loc_8001B6B4:
{
    r6 = 0;
    r5 = 0;
    goto loc_8001B794;
}

loc_8001B6C0:
{
    r0 = (r5 & 2147483647);
    r0 = (r0 | r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001B794;
    }
}

loc_8001B6CC:
{
    r5 = -1074790400;
    r6 = 0;
    goto loc_8001B794;
}

loc_8001B6D8:
{
    r3 = 1048576;
    r0 = (r3 + -1);
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
        goto loc_8001B6F4;
    }
}

loc_8001B6F0:
{
    goto loc_8001B7A0;
}

loc_8001B6F4:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31272));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31264));
    f1.d = (f2.d + f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8001B704:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001B794;
    }
}

loc_8001B708:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8001B70C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001B718;
    }
}

loc_8001B710:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
    r5 = (r5 + r0);
}

loc_8001B718:
{
    r5 = (r5 & ~r4);
    r6 = 0;
    goto loc_8001B794;
}

loc_8001B724:
{
    f1.d = (f1.d + f1.d);
    goto loc_8001B7A0;
}

loc_8001B730:
{
    r0 = (r7 + -20);
    r3 = -1;
    r4 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r6 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001B748;
    }
}

loc_8001B744:
{
    goto loc_8001B7A0;
}

loc_8001B748:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31272));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31264));
    f1.d = (f2.d + f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8001B758:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001B794;
    }
}

loc_8001B75C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8001B760:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001B790;
    }
}

loc_8001B764:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8001B770;
    }
}

loc_8001B768:
{
    r5 = (r5 + 1);
    goto loc_8001B790;
}

loc_8001B770:
{
    r0 = (52 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(52) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r3 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r6 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_8001B784:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001B78C;
    }
}

loc_8001B788:
{
    r5 = (r5 + 1);
}

loc_8001B78C:
{
    r6 = r0;
}

loc_8001B790:
{
    r6 = (r6 & ~r4);
}

loc_8001B794:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
}

loc_8001B7A0:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001B658 func_8001B658 preserves=true fpr_mask=0x00000000
