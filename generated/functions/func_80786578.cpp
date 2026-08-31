#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80786578(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_807865D0_loc_0 = 0;
    uint32_t addr_lfsx_80786664_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80786578;

loc_80786578:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8078659C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078675C;
    }
}

loc_807865A0:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807865A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807865B0;
    }
}

loc_807865AC:
{
    goto loc_8078675C;
}

loc_807865B0:
{
    r0 = MemoryInline::FlatRead16((r5 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6 = MemoryInline::FlatRead16((r5 + 22));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = r0;
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r9 = (r9_rot_1 & -8);
    goto loc_8078663C;
}

loc_807865C4:
{
    r7 = (r5 + 1);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 16));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r7 = (r7_rot_2 & -8);
    addr_lfsx_807865D0_loc_0 = (r10 + r7);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_807865D0_loc_0);
    r8 = (r10 + r7);
    r10 = (r10 + r9);
    MemoryInline::FlatWriteFloat32(r10, f0.d);
    r7 = MemoryInline::FlatRead8((r8 + 4));
    MemoryInline::FlatWrite8((r10 + 4), static_cast<uint8_t>(r7));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r7 = (r7_rot_3 & -8);
    r8 = MemoryInline::FlatRead8((r8 + 5));
    MemoryInline::FlatWrite8((r10 + 5), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 20));
    r8 = (r8 + r7);
    r7 = MemoryInline::FlatRead8((r8 + 4));
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 4), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r8 + 5));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 24));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(5));
    r7 = (r7_rot_4 & -32);
    r8 = (r8 + r7);
    r7 = MemoryInline::FlatRead16((r8 + 20));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite16((r8 + 20), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead8((r10 + 5));
}

loc_80786628:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r6))) {
        goto loc_80786634;
    }
}

loc_8078662C:
{
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r10 + 5), static_cast<uint8_t>(r7));
}

loc_80786634:
{
    r9 = (r9 + 8);
    r5 = (r5 + 1);
}

loc_8078663C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 1044u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 1040u, (r3 + 1056));
    r7 = (r7 + -1);
}

loc_80786648:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r7))) {
        goto loc_807865C4;
    }
}

loc_8078664C:
{
    r7 = r6;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r5 = (r5_rot_1 & -8);
    goto loc_80786708;
}

loc_80786658:
{
    r8 = (r7 + 1);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 20));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r8 = (r8_rot_2 & -8);
    addr_lfsx_80786664_loc_0 = (r10 + r8);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80786664_loc_0);
    r9 = (r10 + r8);
    r10 = (r10 + r5);
    MemoryInline::FlatWriteFloat32(r10, f0.d);
    r8 = MemoryInline::FlatRead8((r9 + 4));
    MemoryInline::FlatWrite8((r10 + 4), static_cast<uint8_t>(r8));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r8 = (r8_rot_3 & -8);
    r9 = MemoryInline::FlatRead8((r9 + 5));
    MemoryInline::FlatWrite8((r10 + 5), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 16));
    r9 = (r9 + r8);
    r8 = MemoryInline::FlatRead8((r9 + 4));
    r8 = (r8 + -1);
    MemoryInline::FlatWrite8((r9 + 4), static_cast<uint8_t>(r8));
    r8 = MemoryInline::FlatRead8((r10 + 5));
    r9 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 24));
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(5));
    r8 = (r8_rot_4 & -32);
    r9 = (r9 + r8);
    r8 = MemoryInline::FlatRead16((r9 + 22));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r8 = (r8 + -1);
    MemoryInline::FlatWrite16((r9 + 22), static_cast<uint16_t>(r8));
    r10 = MemoryInline::FlatRead8((r10 + 4));
}

loc_807866BC:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(r0))) {
        goto loc_80786700;
    }
}

loc_807866C0:
{
    r9 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 16));
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r8 = (r8_rot_5 & 2040);
    r11 = (r9 + r8);
    r12 = MemoryInline::FlatRead8((r11 + 5));
}

loc_807866D4:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(r6))) {
        goto loc_80786700;
    }
}

loc_807866D8:
{
    r9 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 20));
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r8 = (r8_rot_6 & -8);
    r9 = (r9 + r8);
    goto loc_807866F0;
}

loc_807866E8:
{
    r9 = (r9 + 8);
    r12 = (r12 + 1);
}

loc_807866F0:
{
    r8 = MemoryInline::FlatRead8((r9 + 4));
}

loc_807866F8:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r10))) {
        goto loc_807866E8;
    }
}

loc_807866FC:
{
    MemoryInline::FlatWrite8((r11 + 5), static_cast<uint8_t>(r12));
}

loc_80786700:
{
    r5 = (r5 + 8);
    r7 = (r7 + 1);
}

loc_80786708:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 1040u, (r3 + 1056));
    r8 = (r8 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r8));
}

loc_80786714:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80786658;
    }
}

loc_80786718:
{
    r3 = MemoryInline::FlatRead32(r4);
    // inline leaf 0x80786F6C (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & -1025);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x80786F6C
    r5 = MemoryInline::FlatRead32((r30 + 24));
    r0 = 0;
    r3 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32((r30 + 1060));
    r3 = (r3 - r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 5);
    r5_ca_1 = (xer >> 29) & 1u;
    r5 = (r3 + r5_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r3 = (r30 + r3);
    MemoryInline::FlatWrite32((r3 + 32), r4);
    r3 = MemoryInline::FlatRead32((r30 + 1056));
    MemoryInline::FlatWrite32((r30 + 1060), r5);
    r3 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 1056), r3);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8078675C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80786578 func_80786578 preserves=true fpr_mask=0x00000000
