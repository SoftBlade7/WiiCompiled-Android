#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056AA28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8056AA28;

loc_8056AA28:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r25);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r27);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r1 + 96), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r29);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r1 + 104), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r1 + 108), r31);
    r25 = r4;
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8056AA48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8056AA54;
    }
}

loc_8056AA4C:
{
    r0 = MemoryInline::FlatRead32(r5);
    goto loc_8056AA58;
}

loc_8056AA54:
{
    r0 = 0;
}

loc_8056AA58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056AA5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056AB18;
    }
}

loc_8056AA60:
{
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r27 = 0;
    r28 = 0x808B0000u;
    r29 = 0x808B0000u;
    r26 = (r0 & 1);
    r30 = 0x808B0000u;
    r31 = 0x808B0000u;
    goto loc_8056AB00;
}

loc_8056AA80:
{
    r4 = MemoryInline::FlatRead32((r25 + 16));
    r3 = (r1 + 16);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8056AA90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056AA9C;
    }
}

loc_8056AA94:
{
    r4 = MemoryInline::FlatRead32(r4);
    goto loc_8056AAA0;
}

loc_8056AA9C:
{
    r4 = 0;
}

loc_8056AAA0:
{
    r5 = r27;
    ctx->lr = 0x8056AAA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800730B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r1 + 16);
    ctx->lr = 0x8056AAB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80073040u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8056AAB4:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056AAD8;
    }
}

loc_8056AABC:
{
    r3 = (r28 + 20608);
    r5 = (r29 + 20576);
    r6 = (r30 + 20568);
    r7 = (r31 + 20624);
    r4 = 37;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8056AAD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8056AAD8:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8056AAE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056AAFC;
    }
}

loc_8056AAE8:
{
    r6 = r26;
    r3 = (r1 + 8);
    r4 = 1;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8004FAE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    xer = ctx->xer;
}

loc_8056AAFC:
{
    r27 = (r27 + 1);
}

loc_8056AB00:
{
    r0 = MemoryInline::FlatRead32((r25 + 12));
    r3 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    // inline leaf 0x8004EA50 (13 guest instruction(s))
}

loc_inl0_0x8004EA50:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_inl0_0x8004EA5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004EA68;
    }
}

loc_inl0_0x8004EA60:
{
    r3 = (r3 + r0);
    goto loc_inl0_0x8004EA6C;
}

loc_inl0_0x8004EA68:
{
    r3 = 0;
}

loc_inl0_0x8004EA6C:
{
}

loc_inl0_0x8004EA70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004EA7C;
    }
}

loc_inl0_0x8004EA74:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl0_cont_8004EA50;
}

loc_inl0_0x8004EA7C:
{
    r3 = 0;
}

loc_inl0_cont_8004EA50:
{
    // end of inlined leaf 0x8004EA50
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r3));
}

loc_8056AB14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8056AA80;
    }
}

loc_8056AB18:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 84), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 84));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 88));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 92));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 96));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 100));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 104));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 108));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8056AA28 func_8056AA28 preserves=true fpr_mask=0x00000000
