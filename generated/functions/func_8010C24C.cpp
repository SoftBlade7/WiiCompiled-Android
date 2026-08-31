#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010C24C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r28_mdest_0 = 0;
    uint32_t r28_mdest_1 = 0;
    uint32_t r28_mdest_2 = 0;
    uint32_t r28_mdest_3 = 0;
    uint32_t r28_mrot_0 = 0;
    uint32_t r28_mrot_1 = 0;
    uint32_t r28_mrot_2 = 0;
    uint32_t r28_mrot_3 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r29_mdest_0 = 0;
    uint32_t r29_mrot_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8010C24C;

loc_8010C24C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
}

loc_8010C264:
{
    r0 = MemoryInline::FlatRead8(r4);
    r29 = MemoryInline::FlatRead8((r4 + 1));
    r26 = r3;
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r29_mrot_0 = (r29_rot_0 & 65280);
    r29_mdest_0 = (r29 & -65281);
    r29 = (r29_mdest_0 | r29_mrot_0);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(2))) {
        goto loc_8010C280;
    }
}

loc_8010C278:
{
    r28 = r29;
    goto loc_8010C330;
}

loc_8010C280:
{
}

loc_8010C284:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(4))) {
        goto loc_8010C298;
    }
}

loc_8010C288:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r28 = MemoryInline::FlatRead8((r4 + 3));
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r28_mrot_1 = (r28_rot_1 & 65280);
    r28_mdest_1 = (r28 & -65281);
    r28 = (r28_mdest_1 | r28_mrot_1);
    goto loc_8010C330;
}

loc_8010C298:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8010C2A0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(5))) {
        goto loc_8010C2F4;
    }
}

loc_8010C2A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8010C2AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010C2D8;
    }
}

loc_8010C2B0:
{
    ctx->lr = 0x8010C2B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8010A818u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r26;
    r4 = 7;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x8010C2C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80109B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8010C2CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010C31C;
    }
}

loc_8010C2D0:
{
    r3 = 0;
    goto loc_8010C320;
}

loc_8010C2D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_8010C2DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010C2E8;
    }
}

loc_8010C2E0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_8010C2E8:
{
    r3 = r26;
    ctx->lr = 0x8010C2F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8010A818u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8010C31C;
}

loc_8010C2F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(7));
}

loc_8010C2F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010C31C;
    }
}

loc_8010C2FC:
{
    ctx->lr = 0x8010C300u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8010A818u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r26;
    r4 = 2;
    ctx->lr = 0x8010C30Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80109CF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8010C310:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010C31C;
    }
}

loc_8010C314:
{
    r3 = 0;
    goto loc_8010C320;
}

loc_8010C31C:
{
    r3 = 1;
}

loc_8010C320:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    goto loc_8010C41C;
}

loc_8010C330:
{
    r3 = MemoryInline::FlatRead32((r3 + 96));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    r30 = r3;
    r27 = 0;
    goto loc_8010C410;
}

loc_8010C344:
{
    r3 = MemoryInline::FlatRead32((r26 + 96));
    r4 = r27;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl2_0x800EF4B0:
{
}

loc_inl2_0x800EF4B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl2_0x800EF4C4;
    }
}

loc_inl2_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x800EF4C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl2_0x800EF4CC;
    }
}

loc_inl2_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl2_cont_800EF4B0;
}

loc_inl2_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl2_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r4 = MemoryInline::FlatRead16((r3 + 8));
    r31 = r3;
    r0 = (r4 - r29);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8010C40C;
    }
}

loc_8010C364:
{
    r0 = (r4 - r28);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8010C40C;
    }
}

loc_8010C370:
{
    r4 = MemoryInline::FlatRead32((r26 + 8));
    r0 = MemoryInline::FlatRead32(r3);
    r3 = r26;
    r4 = MemoryInline::FlatRead32((r4 + 68));
    r5 = MemoryInline::FlatRead16((r26 + 102));
    r4 = (r0 + r4);
    r6 = MemoryInline::FlatRead32((r26 + 80));
    r4 = (r4 + 5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 255);
    r6_addr_2 = (r6 + r4);
    MemoryInline::FlatWrite8(r6_addr_2, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
    r6_addr_3 = (r6 + r4);
    MemoryInline::FlatWrite8(r6_addr_3, static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r26 + 80));
    r0 = MemoryInline::FlatRead32(r31);
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r4 + r0);
    ctx->lr = 0x8010C3B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8010A4CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8010C3B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8010C3C4;
    }
}

loc_8010C3BC:
{
    r0 = 0;
    goto loc_8010C3FC;
}

loc_8010C3C4:
{
    r0 = MemoryInline::FlatRead32((r26 + 136));
    MemoryInline::FlatWrite32((r31 + 12), r0);
    r3 = MemoryInline::FlatRead32((r26 + 8));
    r4 = MemoryInline::FlatRead32((r26 + 80));
    r0 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8010C3EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8010C3F8;
    }
}

loc_8010C3F0:
{
    r0 = MemoryInline::FlatRead32((r26 + 136));
    MemoryInline::FlatWrite32((r26 + 140), r0);
}

loc_8010C3F8:
{
    r0 = 1;
}

loc_8010C3FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8010C400:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010C40C;
    }
}

loc_8010C404:
{
    r3 = 0;
    goto loc_8010C41C;
}

loc_8010C40C:
{
    r27 = (r27 + 1);
}

loc_8010C410:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r30));
}

loc_8010C414:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8010C344;
    }
}

loc_8010C418:
{
    r3 = 1;
}

loc_8010C41C:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8010C24C func_8010C24C preserves=true fpr_mask=0x00000000
