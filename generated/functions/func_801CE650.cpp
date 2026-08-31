#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CE650(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801CE650;

loc_801CE650:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x802A0000u;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r3 = (r3 + 1188);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    r31 = 0x80350000u;
    r31 = (r31 + 16608);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
    r9 = MemoryInline::FlatRead8((r2 + -26024));
    r8 = MemoryInline::FlatRead8((r2 + -26023));
    r7 = MemoryInline::FlatRead8((r2 + -26022));
    r6 = MemoryInline::FlatRead8((r2 + -26021));
    r5 = MemoryInline::FlatRead8((r2 + -26020));
    r4 = MemoryInline::FlatRead8((r2 + -26019));
    r0 = MemoryInline::FlatRead8((r2 + -26018));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r1 + 12), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r1 + 13), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r1 + 14), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r1 + 15), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r1 + 8), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r1 + 9), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 10), static_cast<uint8_t>(r0));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    r3 = (r1 + 12);
    ctx->lr = 0x801CE6C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80134954u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    ctx->lr = 0x801CE6CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013B100u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x801D0000u;
    r3 = (r3 + -1252);
    // inline leaf 0x8013B320 (14 guest instruction(s))
}

loc_inl0_0x8013B320:
{
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    r0 = MemoryInline::FlatRead32((r4 + 1388));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x8013B330:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x8013B344;
    }
}

loc_inl0_0x8013B334:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x8013B338:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x8013B344;
    }
}

loc_inl0_0x8013B33C:
{
    r3 = 2;
    goto loc_inl0_cont_8013B320;
}

loc_inl0_0x8013B344:
{
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    MemoryInline::FlatWriteRam32((r4 + 1388), r3);
    r3 = 0;
}

loc_inl0_cont_8013B320:
{
    // end of inlined leaf 0x8013B320
    r3 = 0x801D0000u;
    r3 = (r3 + -496);
    // inline leaf 0x8013B1A0 (6 guest instruction(s))
    r4 = 0x80330000u;
    r0 = r3;
    r4 = (r4 + 25208);
    r3 = MemoryInline::FlatRead32((r4 + 1384));
    MemoryInline::FlatWriteRam32((r4 + 1384), r0);
    // end of inlined leaf 0x8013B1A0
    r5 = 0x801D0000u;
    r4 = (r31 + 1802);
    r5 = (r5 + 332);
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013D61Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = 65536;
    r0 = (r3 + -32768);
    r3 = (r0 & 65535);
    ctx->lr = 0x801CE708u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013B3F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 5;
    // inline leaf 0x801386B4 (4 guest instruction(s))
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    MemoryInline::FlatWriteRam16((r4 + 1220), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x801386B4
    r3 = 3200;
    // inline leaf 0x80138A80 (4 guest instruction(s))
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    MemoryInline::FlatWriteRam16((r4 + 1222), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80138A80
    r29 = r31;
    r30 = (r31 + 292);
    r28 = 0;
}

loc_801CE724:
{
    r0 = MemoryInline::FlatRead8((r29 + 317));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801CE72C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CE738;
    }
}

loc_801CE730:
{
    r3 = r30;
    ctx->lr = 0x801CE738u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CE7E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801CE738:
{
    r28 = (r28 + 1);
    r30 = (r30 + 96);
}

loc_801CE744:
{
    r29 = (r29 + 96);
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(10))) {
        goto loc_801CE724;
    }
}

loc_801CE74C:
{
    r30 = r31;
    r29 = (r31 + 1252);
    r28 = 0;
}

loc_801CE758:
{
    r0 = MemoryInline::FlatRead8((r30 + 1277));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801CE760:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CE76C;
    }
}

loc_801CE764:
{
    r3 = r29;
    ctx->lr = 0x801CE76Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CE7E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801CE76C:
{
    r28 = (r28 + 1);
    r29 = (r29 + 96);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(6));
}

loc_801CE778:
{
    r30 = (r30 + 96);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801CE758;
    }
}

loc_801CE780:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = 3;
    r30 = 1;
    MemoryInline::FlatWriteRam8((r31 + 1800), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r13 + -24472), r30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80350000u;
    r0 = 0;
    r4 = (r4 + 16608);
    MemoryInline::FlatWriteRam8((r4 + 1771), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 1770), static_cast<uint8_t>(r30));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    r4 = 1;
    ctx->lr = 0x801CE7C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801349B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
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
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801CE650 func_801CE650 preserves=true fpr_mask=0x00000000
