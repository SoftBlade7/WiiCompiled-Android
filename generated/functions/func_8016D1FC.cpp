#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016D1FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r31_mdest_0 = 0;
    uint32_t r31_mdest_1 = 0;
    uint32_t r31_mdest_2 = 0;
    uint32_t r31_mdest_3 = 0;
    uint32_t r31_mrot_0 = 0;
    uint32_t r31_mrot_1 = 0;
    uint32_t r31_mrot_2 = 0;
    uint32_t r31_mrot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016D1FC;

loc_8016D1FC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r0 = MemoryInline::FlatRead8((r13 + -25679));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016D220:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016D37C;
    }
}

loc_8016D224:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = MemoryInline::FlatRead32((r2 + -26840));
    r30 = 0x80340000u;
    r28 = r3;
    r31 = 0;
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r30 = (r30 + 15808);
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -25716), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 & -13);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 24));
    MemoryInline::FlatWriteRam32((r30 + 28), r31);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWriteRam32((r30 + 20), r0);
    MemoryInline::FlatWrite16((r3 + 48), static_cast<uint16_t>(r31));
    r0 = MemoryInline::FlatRead32((r30 + 24));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 24));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 16383);
    MemoryInline::FlatWrite16((r3 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 16383);
    MemoryInline::FlatWrite16((r3 + 58), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    InvokeDirectCpu<0x8012E59Cu>(ctx);
    r0 = MemoryInline::FlatRead8((r13 + -25656));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016D2CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016D328;
    }
}

loc_8016D2D0:
{
    r5 = 0x80340000u;
    r4 = MemoryInline::FlatRead32((r30 + 24));
    r5 = (r5 + 15844);
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r31_mrot_1 = (r4 & 536870880);
    r31_mdest_1 = (r31 & -536870881);
    r31 = (r31_mdest_1 | r31_mrot_1);
    MemoryInline::FlatWriteRam32((r5 + 20), r3);
    r3 = MemoryInline::FlatRead32((r13 + -25720));
    MemoryInline::FlatWriteRam32((r5 + 24), r4);
    MemoryInline::FlatWriteRam32((r5 + 28), r0);
    MemoryInline::FlatWrite32((r3 + 20), r31);
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 | 4);
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
}

loc_8016D328:
{
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r0 = 0;
    r6 = MemoryInline::FlatRead32((r2 + -26840));
    r3 = r28;
    r4 = (r4 & -3);
    r5 = (r4 & -33);
    MemoryInline::FlatWrite32((r29 + 8), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32((r13 + -25672), r0);
    r0 = MemoryInline::FlatRead32((r6 + 16));
    r0 = (r0 | 3);
    MemoryInline::FlatWrite32((r6 + 16), r0);
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8016D37C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000207F gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8016D1FC func_8016D1FC preserves=true fpr_mask=0x00000000
