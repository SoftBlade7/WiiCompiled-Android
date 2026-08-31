#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A961C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A961C;

loc_801A961C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 2;
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = 0;
    r5 = 16;
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80340000u;
    r31 = (r31 + 29848);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = (r31 + 0);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x80000000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 712), 0, 52u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r30 + 712), static_cast<uint16_t>(r3));
    r3 = r30;
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r30 + 714), static_cast<uint16_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 724), r5);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 720), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 716), r4);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 728), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 752), r4);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 748), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 744), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 760), r4);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 756), r4);
    }
    MemoryInline::FlatWriteRam32((r29 + 216), r30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A2098u>(ctx);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1E70u>(ctx);
    r4 = 0x803A0000u;
    r5 = 0x80390000u;
    r4 = (r4 + -28288);
    r3 = -559022080;
    r5 = (r5 + -28292);
    MemoryInline::FlatWriteRam32((r30 + 772), r4);
    r0 = (r3 + -17730);
    r4 = r30;
    MemoryInline::FlatWriteRam32((r30 + 776), r5);
    MemoryInline::FlatWriteRam32(r5, r0);
    r12 = MemoryInline::FlatRead32((r13 + -28960));
    r3 = MemoryInline::FlatRead32((r29 + 228));
    ctr = r12;
    ctx->lr = 0x801A96D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r29 + 228), r30);
    // inline leaf 0x801A2030 (2 guest instruction(s))
    r3 = r1;
    // end of inlined leaf 0x801A2030
    r4 = MemoryInline::FlatRead32((r29 + 228));
    r4 = MemoryInline::FlatRead32((r4 + 776));
    r8 = (r4 + 4);
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r8), static_cast<uint32_t>(r3));
}

loc_801A96E8:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_801A97A8;
    }
}

loc_801A96EC:
{
    r5 = (r3 - r8);
    r6 = (r3 + -32);
    r4 = (r5 + 3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 2);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addze_src_1)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801A9704:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_801A9780;
    }
}

loc_801A9708:
{
    r7 = 0;
    if (((cr & 0x04000000u) != 0)) {
        goto loc_801A9734;
    }
}

loc_801A9710:
{
    r0 = (r5 & -2147483648);
}

loc_801A9714:
{
    r5 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A9728;
    }
}

loc_801A971C:
{
    r0 = (r4 & -2147483648);
}

loc_801A9720:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A9728;
    }
}

loc_801A9724:
{
    r5 = 0;
}

loc_801A9728:
{
}

loc_801A972C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801A9734;
    }
}

loc_801A9730:
{
    r7 = 1;
}

loc_801A9734:
{
}

loc_801A9738:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801A9780;
    }
}

loc_801A973C:
{
    r0 = (r6 + 31);
    r4 = 0;
    r0 = (r0 - r8);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    ctr = r0;
}

loc_801A9754:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r6))) {
        goto loc_801A9780;
    }
}

loc_801A9758:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r8, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r8, r4);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r8 + 4), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r8 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r8 + 12), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r8 + 16), r4);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r8 + 20), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r8 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r8 + 28), r4);
    }
    r8 = (r8 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A9758;
    }
}

loc_801A9780:
{
    r0 = (r3 + 3);
    r4 = 0;
    r0 = (r0 - r8);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & 1073741823);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r3));
}

loc_801A9798:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A97A8;
    }
}

loc_801A979C:
{
    MemoryInline::FlatWrite32(r8, r4);
    r8 = (r8 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A979C;
    }
}

loc_801A97A8:
{
    r3 = 0;
    r0 = 2;
    MemoryInline::FlatWrite32((r13 + -25312), r3);
    r4 = (r31 + 792);
    MemoryInline::FlatWrite32((r13 + -25316), r3);
    ctr = r0;
}

loc_801A97C0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_2, 0u, r4, r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 8), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 20), r3);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 16), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 28), r3);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 24), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r4 + 36), r3);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r4 + 32), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r4 + 44), r3);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r4 + 40), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r4 + 52), r3);
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r4 + 48), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r4 + 60), r3);
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r4 + 56), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r4 + 68), r3);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r4 + 64), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r4 + 76), r3);
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r4 + 72), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 84u, (r4 + 84), r3);
        MemoryInline::WriteResolved32(guest_range_2, 80u, (r4 + 80), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 92u, (r4 + 92), r3);
        MemoryInline::WriteResolved32(guest_range_2, 88u, (r4 + 88), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r4 + 100), r3);
        MemoryInline::WriteResolved32(guest_range_2, 96u, (r4 + 96), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r4 + 108), r3);
        MemoryInline::WriteResolved32(guest_range_2, 104u, (r4 + 104), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 116u, (r4 + 116), r3);
        MemoryInline::WriteResolved32(guest_range_2, 112u, (r4 + 112), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 124u, (r4 + 124), r3);
        MemoryInline::WriteResolved32(guest_range_2, 120u, (r4 + 120), r3);
    }
    r4 = (r4 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A97C0;
    }
}

loc_801A9848:
{
    r4 = 0;
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r3 + 224), r4);
    MemoryInline::FlatWriteRam32((r3 + 220), r4);
    MemoryInline::FlatWriteRam32((r3 + 220), r30);
}

loc_801A9864:
{
    r29 = 0;
    MemoryInline::FlatWriteRam32((r30 + 768), r4);
    r4 = 0x80000000u;
    r3 = (r31 + 1048);
    MemoryInline::FlatWriteRam32((r30 + 764), r29);
    MemoryInline::FlatWriteRam32((r4 + 224), r30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A2098u>(ctx);
    MemoryInline::FlatWrite32((r13 + -25320), r29);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A961C func_801A961C preserves=true fpr_mask=0x00000000
