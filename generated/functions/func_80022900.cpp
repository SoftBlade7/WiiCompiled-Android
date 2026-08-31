#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80022900(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80022900;

loc_80022900:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r27 = r3;
    r28 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A98B0u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80022924:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80022934;
    }
}

loc_80022928:
{
    r3 = 0x802A0000u;
    r3 = (r3 + 27808);
    ctx->lr = 0x80022934u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7EE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80022934:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 6), 0, 22u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 14u, (r27 + 20));
    r30 = 0;
    r0 = MemoryInline::ReadResolved32(guest_range_0, 18u, (r27 + 24));
    r4 = (r0 - r3);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80022950;
    }
}

loc_80022948:
{
    r4 = 0;
    goto loc_80022988;
}

loc_80022950:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r27 + 16));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r27 + 12));
    r3 = (r0 - r3);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80022968;
    }
}

loc_80022960:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r27 + 6));
    r3 = (r3 + r0);
}

loc_80022968:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r27 + 14));
    r3 = (r3 & 65535);
}

loc_80022974:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80022980;
    }
}

loc_80022978:
{
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
}

loc_80022980:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r3));
}

loc_80022984:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80022A74;
    }
}

loc_80022988:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r27 + 16));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r27 + 6));
    r0 = (r0 + r4);
    r31 = (r0 & 65535);
}

loc_8002299C:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r5))) {
        goto loc_800229A8;
    }
}

loc_800229A0:
{
    r0 = (r31 - r5);
    r31 = (r0 & 65535);
}

loc_800229A8:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 6u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r27 + 14));
            r4 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r27 + 12));
        }
    }
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r4 + r0);
    r29 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r5));
}

loc_800229C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80022A68;
    }
}

loc_800229CC:
{
    r29 = 0;
    goto loc_80022A68;
}

loc_800229D4:
{
    r3 = MemoryInline::FlatRead16((r27 + 4));
    r0 = (r31 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_800229E0:
{
    r4 = MemoryInline::FlatRead32(r27);
    r3 = (r3 + 1);
    r0 = (r3 * r0);
    r5 = (r4 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80022A08;
    }
}

loc_800229F4:
{
    r3 = r28;
    r4 = (r13 + -32688);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80022A04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B5A80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80022A30;
}

loc_80022A08:
{
    r0 = (r30 & 65535);
    r7 = r5;
    r0 = (r0 * 10);
    r4 = MemoryInline::FlatRead16((r27 + 30));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead16((r27 + 28));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r5 = 0;
    r6 = (r13 + -32688);
    r4 = (r4 + r0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80022A30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021E90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80022A30:
{
    r31 = (r31 + 1);
    r0 = MemoryInline::FlatRead16((r27 + 6));
    r3 = (r31 & 65535);
    r30 = (r30 + 1);
}

loc_80022A44:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80022A58;
    }
}

loc_80022A48:
{
    r0 = MemoryInline::FlatRead16((r27 + 10));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80022A50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80022A74;
    }
}

loc_80022A54:
{
    r31 = 0;
}

loc_80022A58:
{
    r0 = MemoryInline::FlatRead16((r27 + 32));
    r3 = (r30 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80022A64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80022A74;
    }
}

loc_80022A68:
{
    r0 = (r31 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
}

loc_80022A70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800229D4;
    }
}

loc_80022A74:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A98B0u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80022A7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80022A8C;
    }
}

loc_80022A80:
{
    r3 = 0x802A0000u;
    r3 = (r3 + 27808);
    ctx->lr = 0x80022A8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80022A8C:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80022900 func_80022900 preserves=true fpr_mask=0x00000000
