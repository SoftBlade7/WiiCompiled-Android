#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F6458(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_10 = 0;
    uint32_t r26_addr_11 = 0;
    uint32_t r26_addr_12 = 0;
    uint32_t r26_addr_13 = 0;
    uint32_t r26_addr_14 = 0;
    uint32_t r26_addr_15 = 0;
    uint32_t r26_addr_16 = 0;
    uint32_t r26_addr_17 = 0;
    uint32_t r26_addr_18 = 0;
    uint32_t r26_addr_19 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_20 = 0;
    uint32_t r26_addr_21 = 0;
    uint32_t r26_addr_22 = 0;
    uint32_t r26_addr_23 = 0;
    uint32_t r26_addr_24 = 0;
    uint32_t r26_addr_25 = 0;
    uint32_t r26_addr_26 = 0;
    uint32_t r26_addr_27 = 0;
    uint32_t r26_addr_28 = 0;
    uint32_t r26_addr_29 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_30 = 0;
    uint32_t r26_addr_31 = 0;
    uint32_t r26_addr_32 = 0;
    uint32_t r26_addr_33 = 0;
    uint32_t r26_addr_34 = 0;
    uint32_t r26_addr_35 = 0;
    uint32_t r26_addr_36 = 0;
    uint32_t r26_addr_37 = 0;
    uint32_t r26_addr_38 = 0;
    uint32_t r26_addr_39 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r26_addr_40 = 0;
    uint32_t r26_addr_41 = 0;
    uint32_t r26_addr_42 = 0;
    uint32_t r26_addr_43 = 0;
    uint32_t r26_addr_44 = 0;
    uint32_t r26_addr_45 = 0;
    uint32_t r26_addr_46 = 0;
    uint32_t r26_addr_47 = 0;
    uint32_t r26_addr_48 = 0;
    uint32_t r26_addr_49 = 0;
    uint32_t r26_addr_5 = 0;
    uint32_t r26_addr_50 = 0;
    uint32_t r26_addr_51 = 0;
    uint32_t r26_addr_52 = 0;
    uint32_t r26_addr_53 = 0;
    uint32_t r26_addr_54 = 0;
    uint32_t r26_addr_55 = 0;
    uint32_t r26_addr_56 = 0;
    uint32_t r26_addr_57 = 0;
    uint32_t r26_addr_58 = 0;
    uint32_t r26_addr_59 = 0;
    uint32_t r26_addr_6 = 0;
    uint32_t r26_addr_60 = 0;
    uint32_t r26_addr_61 = 0;
    uint32_t r26_addr_7 = 0;
    uint32_t r26_addr_8 = 0;
    uint32_t r26_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F6458;

loc_800F6458:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
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
    // end of inlined leaf 0x80021594
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r31 = r7;
    r29 = 1;
    goto loc_800F64AC;
}

loc_800F6488:
{
    r26_addr_2 = (r26 + r30);
    r4 = MemoryInline::FlatRead8(r26_addr_2);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F649C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F64B8;
    }
}

loc_800F64A0:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F64AC:
{
    r30 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r27));
}

loc_800F64B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6488;
    }
}

loc_800F64B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r27));
}

loc_800F64BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F64C8;
    }
}

loc_800F64C0:
{
    r3 = 1;
    goto loc_800F6D1C;
}

loc_800F64C8:
{
    r3 = (r1 + 32);
    r4 = 0;
    r5 = 24;
    ctx->lr = 0x800F64D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32(r28);
    r26_addr_4 = (r26 + r3);
    r0 = MemoryInline::FlatRead8(r26_addr_4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(60));
}

loc_800F64E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F64F4;
    }
}

loc_800F64EC:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F64F4:
{
    r0 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r27));
}

loc_800F64FC:
{
    MemoryInline::FlatWrite32(r28, r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F653C;
    }
}

loc_800F6504:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6510:
{
    r26_addr_6 = (r26 + r30);
    r4 = MemoryInline::FlatRead8(r26_addr_6);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F6524:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F6530;
    }
}

loc_800F6528:
{
    r0 = 1;
    goto loc_800F654C;
}

loc_800F6530:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F653C:
{
    r30 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r27));
}

loc_800F6544:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6510;
    }
}

loc_800F6548:
{
    r0 = 0;
}

loc_800F654C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6550:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F655C;
    }
}

loc_800F6554:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F655C:
{
    r26_addr_8 = (r26 + r30);
    r0 = MemoryInline::FlatRead8(r26_addr_8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(33));
}

loc_800F6568:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6584;
    }
}

loc_800F656C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(63));
}

loc_800F6570:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6584;
    }
}

loc_800F6574:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(37));
}

loc_800F6578:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6584;
    }
}

loc_800F657C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(47));
}

loc_800F6580:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F659C;
    }
}

loc_800F6584:
{
    r3 = MemoryInline::FlatRead32(r28);
    r29 = 0;
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r3);
    r30 = (r3 + -2);
    goto loc_800F65A0;
}

loc_800F659C:
{
    r30 = (r30 + -1);
}

loc_800F65A0:
{
    r3 = r25;
    r4 = r26;
    r5 = r27;
    r6 = r28;
    r7 = (r1 + 32);
    ctx->lr = 0x800F65B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F6D34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F65BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F65F8;
    }
}

loc_800F65C0:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F65CC:
{
    r26_addr_10 = (r26 + r0);
    r4 = MemoryInline::FlatRead8(r26_addr_10);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F65E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F65EC;
    }
}

loc_800F65E4:
{
    r0 = 1;
    goto loc_800F6608;
}

loc_800F65EC:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F65F8:
{
    r0 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r27));
}

loc_800F6600:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F65CC;
    }
}

loc_800F6604:
{
    r0 = 0;
}

loc_800F6608:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F660C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F6618;
    }
}

loc_800F6610:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800F661C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F663C;
    }
}

loc_800F6620:
{
    r3 = MemoryInline::FlatRead32(r25);
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    r4 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 52), r31);
    r3 = MemoryInline::FlatRead32(r25);
    ctx->lr = 0x800F663Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EF4E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r24 = ctx->gpr[24];
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

loc_800F663C:
{
    r31 = 0x80270000u;
    r31 = (r31 + 4424);
    goto loc_800F6794;
}

loc_800F6648:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 24;
    ctx->lr = 0x800F6658u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r25;
    r4 = r26;
    r5 = r27;
    r6 = r28;
    r7 = (r1 + 8);
    ctx->lr = 0x800F6670u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F6D34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F6674:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F66B0;
    }
}

loc_800F6678:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6684:
{
    r26_addr_15 = (r26 + r24);
    r4 = MemoryInline::FlatRead8(r26_addr_15);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F6698:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F66A4;
    }
}

loc_800F669C:
{
    r0 = 1;
    goto loc_800F66C0;
}

loc_800F66A4:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F66B0:
{
    r24 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r27));
}

loc_800F66B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6684;
    }
}

loc_800F66BC:
{
    r0 = 0;
}

loc_800F66C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F66C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F66D0;
    }
}

loc_800F66C8:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F66D0:
{
    r26_addr_17 = (r26 + r24);
    r0 = MemoryInline::FlatRead8(r26_addr_17);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(61));
}

loc_800F66DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F66E8;
    }
}

loc_800F66E0:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F66E8:
{
    r6 = MemoryInline::FlatRead32(r28);
    r3 = r25;
    r4 = r26;
    r5 = r27;
    r0 = (r6 + 1);
    r6 = r28;
    MemoryInline::FlatWrite32(r28, r0);
    r7 = (r1 + 16);
    ctx->lr = 0x800F670Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F6F60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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

loc_800F6710:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F674C;
    }
}

loc_800F6714:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6720:
{
    r26_addr_19 = (r26 + r0);
    r4 = MemoryInline::FlatRead8(r26_addr_19);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F6734:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F6740;
    }
}

loc_800F6738:
{
    r0 = 1;
    goto loc_800F675C;
}

loc_800F6740:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F674C:
{
    r0 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r27));
}

loc_800F6754:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6720;
    }
}

loc_800F6758:
{
    r0 = 0;
}

loc_800F675C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6760:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F676C;
    }
}

loc_800F6764:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F676C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800F6770:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6794;
    }
}

loc_800F6774:
{
    r3 = MemoryInline::FlatRead32((r25 + 4));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    r0 = MemoryInline::FlatRead32((r1 + 48));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = MemoryInline::FlatRead32((r25 + 4));
    ctx->lr = 0x800F6794u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EF4E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r24 = ctx->gpr[24];
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

loc_800F6794:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F679C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r27))) {
        goto loc_800F6818;
    }
}

loc_800F67A0:
{
    r26_addr_13 = (r26 + r0);
    r4 = MemoryInline::FlatRead8(r26_addr_13);
    r0 = 0;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_800F67B8;
    }
}

loc_800F67B0:
{
}

loc_800F67B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(256))) {
        goto loc_800F67BC;
    }
}

loc_800F67B8:
{
    r0 = 1;
}

loc_800F67BC:
{
}

loc_800F67C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F67CC;
    }
}

loc_800F67C4:
{
    r0 = 0;
    goto loc_800F67E0;
}

loc_800F67CC:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r0 & 9);
}

loc_800F67E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F67E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F6648;
    }
}

loc_800F67E8:
{
    goto loc_800F6818;
}

loc_800F67EC:
{
    r26_addr_22 = (r26 + r31);
    r4 = MemoryInline::FlatRead8(r26_addr_22);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F6800:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F680C;
    }
}

loc_800F6804:
{
    r0 = 1;
    goto loc_800F6828;
}

loc_800F680C:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F6818:
{
    r31 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r27));
}

loc_800F6820:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F67EC;
    }
}

loc_800F6824:
{
    r0 = 0;
}

loc_800F6828:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F682C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F6838;
    }
}

loc_800F6830:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6838:
{
    r3 = (r30 + r26);
    r0 = 0;
    r5 = MemoryInline::FlatRead8((r3 + 1));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_800F6854;
    }
}

loc_800F684C:
{
}

loc_800F6850:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(256))) {
        goto loc_800F6858;
    }
}

loc_800F6854:
{
    r0 = 1;
}

loc_800F6858:
{
}

loc_800F685C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F6868;
    }
}

loc_800F6860:
{
    r0 = 0;
    goto loc_800F6884;
}

loc_800F6868:
{
    r3 = 0x80270000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3 = (r3 + 4424);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_5);
    r0 = (r0 & 9);
}

loc_800F6884:
{
}

loc_800F6888:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F68A0;
    }
}

loc_800F688C:
{
    r26_addr_24 = (r26 + r31);
    r3 = MemoryInline::FlatRead8(r26_addr_24);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_800F689C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_800F68B0;
    }
}

loc_800F68A0:
{
    r26_addr_26 = (r26 + r31);
    r0 = MemoryInline::FlatRead8(r26_addr_26);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800F68AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_800F6938;
    }
}

loc_800F68B0:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
    goto loc_800F68EC;
}

loc_800F68C0:
{
    r26_addr_58 = (r26 + r24);
    r4 = MemoryInline::FlatRead8(r26_addr_58);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F68D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F68E0;
    }
}

loc_800F68D8:
{
    r0 = 1;
    goto loc_800F68FC;
}

loc_800F68E0:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F68EC:
{
    r24 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r27));
}

loc_800F68F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F68C0;
    }
}

loc_800F68F8:
{
    r0 = 0;
}

loc_800F68FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6900:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F690C;
    }
}

loc_800F6904:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F690C:
{
    r26_addr_60 = (r26 + r24);
    r0 = MemoryInline::FlatRead8(r26_addr_60);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(62));
}

loc_800F6918:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6924;
    }
}

loc_800F691C:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6924:
{
    r4 = MemoryInline::FlatRead32(r28);
    r3 = 1;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r28, r0);
    goto loc_800F6D1C;
}

loc_800F6938:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(62));
}

loc_800F693C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6948;
    }
}

loc_800F6940:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6948:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
    goto loc_800F6984;
}

loc_800F6958:
{
    r26_addr_28 = (r26 + r31);
    r4 = MemoryInline::FlatRead8(r26_addr_28);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F696C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F6978;
    }
}

loc_800F6970:
{
    r0 = 1;
    goto loc_800F6994;
}

loc_800F6978:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F6984:
{
    r31 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r27));
}

loc_800F698C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6958;
    }
}

loc_800F6990:
{
    r0 = 0;
}

loc_800F6994:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6998:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F69A4;
    }
}

loc_800F699C:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F69A4:
{
    r26_addr_30 = (r26 + r31);
    r0 = MemoryInline::FlatRead8(r26_addr_30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800F69B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(60))) {
        goto loc_800F6D10;
    }
}

loc_800F69B4:
{
    r30 = 0;
    goto loc_800F69E8;
}

loc_800F69BC:
{
    r26_addr_32 = (r26 + r24);
    r4 = MemoryInline::FlatRead8(r26_addr_32);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F69D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F69DC;
    }
}

loc_800F69D4:
{
    r0 = 1;
    goto loc_800F69F8;
}

loc_800F69DC:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F69E8:
{
    r24 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r27));
}

loc_800F69F0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F69BC;
    }
}

loc_800F69F4:
{
    r0 = 0;
}

loc_800F69F8:
{
}

loc_800F69FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F6A08;
    }
}

loc_800F6A00:
{
    r0 = 0;
    goto loc_800F6A80;
}

loc_800F6A08:
{
    r26_addr_34 = (r26 + r24);
    r0 = MemoryInline::FlatRead8(r26_addr_34);
    r3 = (r26 + r24);
}

loc_800F6A14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(60))) {
        goto loc_800F6A70;
    }
}

loc_800F6A18:
{
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r30 = r3;
    goto loc_800F6A70;
}

loc_800F6A24:
{
    r26_addr_36 = (r26 + r0);
    r0 = MemoryInline::FlatRead8(r26_addr_36);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(60));
}

loc_800F6A30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F6A58;
    }
}

loc_800F6A34:
{
    r3 = r30;
    r4 = (r1 + 44);
    ctx->lr = 0x800F6A40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F70D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r24 = ctx->gpr[24];
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

loc_800F6A44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F6A50;
    }
}

loc_800F6A48:
{
    r0 = 0;
    goto loc_800F6A80;
}

loc_800F6A50:
{
    r0 = 1;
    goto loc_800F6A80;
}

loc_800F6A58:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
    r3 = MemoryInline::FlatRead32((r1 + 44));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
}

loc_800F6A70:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F6A78:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r27))) {
        goto loc_800F6A24;
    }
}

loc_800F6A7C:
{
    r0 = 0;
}

loc_800F6A80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6A84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F6A90;
    }
}

loc_800F6A88:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6A90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800F6A94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6AD8;
    }
}

loc_800F6A98:
{
    r3 = MemoryInline::FlatRead32(r25);
    r4 = (r1 + 32);
    r5 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = 0x800F6AA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EF920u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800F6AD8;
}

loc_800F6AAC:
{
    r26_addr_39 = (r26 + r31);
    r4 = MemoryInline::FlatRead8(r26_addr_39);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F6AC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F6ACC;
    }
}

loc_800F6AC4:
{
    r0 = 1;
    goto loc_800F6AE8;
}

loc_800F6ACC:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F6AD8:
{
    r31 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r27));
}

loc_800F6AE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6AAC;
    }
}

loc_800F6AE4:
{
    r0 = 0;
}

loc_800F6AE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6AEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F6D10;
    }
}

loc_800F6AF0:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6AFC:
{
    r26_addr_42 = (r26 + r31);
    r0 = MemoryInline::FlatRead8(r26_addr_42);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(60));
}

loc_800F6B08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6B14;
    }
}

loc_800F6B0C:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6B14:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
    goto loc_800F6B50;
}

loc_800F6B24:
{
    r26_addr_44 = (r26 + r24);
    r4 = MemoryInline::FlatRead8(r26_addr_44);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F6B38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F6B44;
    }
}

loc_800F6B3C:
{
    r0 = 1;
    goto loc_800F6B60;
}

loc_800F6B44:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F6B50:
{
    r24 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r27));
}

loc_800F6B58:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6B24;
    }
}

loc_800F6B5C:
{
    r0 = 0;
}

loc_800F6B60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6B64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F6B70;
    }
}

loc_800F6B68:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6B70:
{
    r26_addr_46 = (r26 + r24);
    r0 = MemoryInline::FlatRead8(r26_addr_46);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800F6B7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_800F6C9C;
    }
}

loc_800F6B80:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
    goto loc_800F6BBC;
}

loc_800F6B90:
{
    r26_addr_48 = (r26 + r24);
    r4 = MemoryInline::FlatRead8(r26_addr_48);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F6BA4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F6BB0;
    }
}

loc_800F6BA8:
{
    r0 = 1;
    goto loc_800F6BCC;
}

loc_800F6BB0:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F6BBC:
{
    r24 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r27));
}

loc_800F6BC4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6B90;
    }
}

loc_800F6BC8:
{
    r0 = 0;
}

loc_800F6BCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6BD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F6BDC;
    }
}

loc_800F6BD4:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6BDC:
{
    r25 = MemoryInline::FlatRead32((r1 + 36));
    r0 = (r24 + r25);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r27));
}

loc_800F6BE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6BF4;
    }
}

loc_800F6BEC:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6BF4:
{
    r3 = MemoryInline::FlatRead32((r1 + 32));
    r5 = r25;
    r4 = (r26 + r24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F6C08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6C14;
    }
}

loc_800F6C0C:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6C14:
{
    r0 = MemoryInline::FlatRead32(r28);
    r0 = (r0 + r25);
    MemoryInline::FlatWrite32(r28, r0);
    goto loc_800F6C50;
}

loc_800F6C24:
{
    r26_addr_51 = (r26 + r24);
    r4 = MemoryInline::FlatRead8(r26_addr_51);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F6C38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F6C44;
    }
}

loc_800F6C3C:
{
    r0 = 1;
    goto loc_800F6C60;
}

loc_800F6C44:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F6C50:
{
    r24 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r27));
}

loc_800F6C58:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6C24;
    }
}

loc_800F6C5C:
{
    r0 = 0;
}

loc_800F6C60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6C64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F6C70;
    }
}

loc_800F6C68:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6C70:
{
    r26_addr_53 = (r26 + r24);
    r0 = MemoryInline::FlatRead8(r26_addr_53);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(62));
}

loc_800F6C7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6C88;
    }
}

loc_800F6C80:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6C88:
{
    r4 = MemoryInline::FlatRead32(r28);
    r3 = 1;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r28, r0);
    goto loc_800F6D1C;
}

loc_800F6C9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6CA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6CB0;
    }
}

loc_800F6CA8:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6CB0:
{
    MemoryInline::FlatWrite32(r28, r31);
    r3 = r25;
    r4 = r26;
    r5 = r27;
    r7 = MemoryInline::FlatRead32((r1 + 48));
    r6 = r28;
    ctx->lr = 0x800F6CCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F6458u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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

loc_800F6CD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F6D04;
    }
}

loc_800F6CD4:
{
    r3 = 0;
    goto loc_800F6D1C;
}

loc_800F6CE0:
{
    r26_addr_55 = (r26 + r31);
    r4 = MemoryInline::FlatRead8(r26_addr_55);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F6CF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F6D10;
    }
}

loc_800F6CF8:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_800F6D04:
{
    r31 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r27));
}

loc_800F6D0C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6CE0;
    }
}

loc_800F6D10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r27));
}

loc_800F6D14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6AFC;
    }
}

loc_800F6D18:
{
    r3 = 0;
}

loc_800F6D1C:
{
    r11 = (r1 + 96);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F6458 func_800F6458 preserves=true fpr_mask=0x00000000
