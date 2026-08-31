#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805ECFF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805ECFF0;

loc_805ECFF0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 0;
    r3 = (r3 + 1588);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x805FA930
    r31 = r3;
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 22;
    ctx->lr = 0x805ED024u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    r4 = (r31 + 104);
    r5 = 20;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = 0;
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r4));
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805ED04C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805ED068;
    }
}

loc_805ED050:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
}

loc_805ED068:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 148), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r31 + 149));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 148));
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 22), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r4 + 22), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r31 + 151));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 150));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 24), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r31 + 153));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 152));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 26), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r31 + 155));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r31 + 154));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 28), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805ED0B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805ED0D0;
    }
}

loc_805ED0B4:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r6 = (r3 + 56);
    goto loc_805ED0D4;
}

loc_805ED0D0:
{
    r6 = 0;
}

loc_805ED0D4:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 22u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r1 + 10));
    r30 = 0x809C0000u;
    r3 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r1 + 8));
    r5 = (r31 + 148);
    guest_range_2 = MemoryInline::ResolveRangeHost(r6, 0, 22u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 0u, r6, static_cast<uint16_t>(r3));
    r4 = 0;
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r6 + 2), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 4u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_3, 6u, (r1 + 14));
            r3 = MemoryInline::ReadResolved16(guest_range_3, 4u, (r1 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r6 + 4), r3);
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r6 + 6), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_3, 10u, (r1 + 18));
            r3 = MemoryInline::ReadResolved16(guest_range_3, 8u, (r1 + 16));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 8u, (r6 + 8), r3);
        MemoryInline::WriteResolved16(guest_range_2, 10u, (r6 + 10), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 12u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_3, 14u, (r1 + 22));
            r3 = MemoryInline::ReadResolved16(guest_range_3, 12u, (r1 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r6 + 12), r3);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r6 + 14), r0);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_3, 16u, (r1 + 24));
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r6 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 18u, (r1 + 26));
    MemoryInline::WriteResolved16(guest_range_2, 18u, (r6 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 20u, (r1 + 28));
    MemoryInline::WriteResolved16(guest_range_2, 20u, (r6 + 20), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 568);
    ctx->lr = 0x805ED148u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805FA6E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213E4 (11 guest instruction(s))
}

loc_inl1_0x806213E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x806213EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x806213F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x806213F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x806213FC:
{
    r4 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_806213E4;
}

loc_inl1_return:
{
}

loc_inl1_cont_806213E4:
{
    // end of inlined leaf 0x806213E4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805ECFF0 func_805ECFF0 preserves=true fpr_mask=0x00000000
