#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805287BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_sthux_80528B94_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_addc_right_3 = 0;
    uint32_t r0_addc_right_4 = 0;
    uint32_t r0_addc_right_5 = 0;
    uint32_t r0_addc_right_6 = 0;
    uint32_t r0_addc_right_7 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_adde_left_3 = 0;
    uint32_t r0_adde_left_4 = 0;
    uint32_t r0_adde_left_5 = 0;
    uint32_t r0_adde_left_6 = 0;
    uint32_t r0_adde_left_7 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805287BC;

loc_805287BC:
{
    MemoryInline::FlatWriteRam32((r1 + -624), r1);
    r1 = (r1 + -624);
    r0 = ctx->lr;
}

loc_805287C8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 560), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 628), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 560), r16);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 564), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 568), r18);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 572), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 576), r20);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 580), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 584), r22);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 588), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 592), r24);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 596), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 600), r26);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 604), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r1 + 608), r28);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 612), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r1 + 616), r30);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r1 + 620), r31);
    }
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_805287EC;
    }
}

loc_805287E4:
{
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl0_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
}

loc_inl0_0x8051BEEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8051BEF0:
{
}

loc_inl0_0x8051BEF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl0_cont_8051BED0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r31 = MemoryInline::FlatRead32((r3 + 3220));
}

loc_805287EC:
{
}

loc_805287F0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_805287F8;
    }
}

loc_805287F4:
{
    r30 = (r28 + 752);
}

loc_805287F8:
{
    r0 = MemoryInline::FlatRead8((r29 + 16));
}

loc_80528800:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052888C;
    }
}

loc_80528804:
{
    r3 = 0x809C0000u;
    r7 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r8 = 0;
    r4 = MemoryInline::FlatRead8((r3 + 36));
    r6 = (r3 + 40);
    goto loc_80528870;
}

loc_80528820:
{
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r3 = (r6 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_80528834:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80528840;
    }
}

loc_80528838:
{
}

loc_8052883C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8052886C;
    }
}

loc_80528840:
{
    r3 = (r6 + r0);
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r3 + -24);
}

loc_80528854:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(20))) {
        goto loc_8052885C;
    }
}

loc_80528858:
{
    r5 = 1;
}

loc_8052885C:
{
}

loc_80528860:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8052886C;
    }
}

loc_80528864:
{
    r7 = 1;
    goto loc_8052887C;
}

loc_8052886C:
{
    r8 = (r8 + 1);
}

loc_80528870:
{
    r0 = (r8 & 255);
}

loc_80528878:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_80528820;
    }
}

loc_8052887C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80528880:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052888C;
    }
}

loc_80528884:
{
    r3 = 0;
    goto loc_80528E94;
}

loc_8052888C:
{
    r26 = 0x80890000u;
    r27 = (r1 + 152);
    r26 = (r26 + -640);
    r19 = 0;
    r18 = 0;
    r25 = 0x809C0000u;
    r22 = 0x809C0000u;
    r24 = 65536;
    r21 = 1;
    goto loc_80528B40;
}

loc_805288B4:
{
    r0 = MemoryInline::FlatRead8((r29 + 6));
    r17 = 1;
}

loc_805288C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805288F4;
    }
}

loc_805288C4:
{
    r0 = (r18 & 65535);
    r3 = (r28 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 624));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 255);
    r3 = (r29 + r0);
    r4 = (r4 & 7);
    r0 = MemoryInline::FlatRead8((r3 + 17));
    r3 = PPC_Slw(static_cast<uint32_t>(r21), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805288F4;
    }
}

loc_805288F0:
{
    r17 = 0;
}

loc_805288F4:
{
}

loc_805288F8:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_8052898C;
    }
}

loc_805288FC:
{
    r3 = MemoryInline::FlatRead32((r22 + -10424));
    r3 = (r3 + 131072);
    r3 = MemoryInline::FlatRead32((r3 + 20476));
    r3 = (r3 + 131072);
    r0 = MemoryInline::FlatRead32((r3 + 13068));
    r0 = (r0 & 32);
}

loc_80528914:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052898C;
    }
}

loc_80528918:
{
    r0 = (r18 & 65535);
    r23 = (r24 + -27664);
    r20 = (r28 + r0);
    r17 = 0;
    r16 = 0;
}

loc_8052892C:
{
    r0 = (r16 & 255);
    r3 = MemoryInline::FlatRead32((r22 + -10424));
    r0 = (r0 * r23);
    r3 = (r3 + r0);
    r4 = (r3 + 56);
    r3 = (r4 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -27667));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052894C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80528980;
    }
}

loc_80528950:
{
    r3 = (r4 + 22);
    r4 = (r1 + 10);
    ctx->lr = 0x8052895Cu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C75F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80528960:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80528980;
    }
}

loc_80528964:
{
    r0 = MemoryInline::FlatRead8((r20 + 624));
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80528974:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80528980;
    }
}

loc_80528978:
{
    r17 = 1;
    goto loc_8052898C;
}

loc_80528980:
{
    r16 = (r16 + 1);
}

loc_80528988:
{
    if ((static_cast<uint32_t>(r16) < static_cast<uint32_t>(4))) {
        goto loc_8052892C;
    }
}

loc_8052898C:
{
}

loc_80528990:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_80528A74;
    }
}

loc_80528994:
{
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_8052899C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80528A74;
    }
}

loc_805289A0:
{
    r0 = (r18 & 65535);
    r16 = 0;
    r23 = (r28 + r0);
    goto loc_80528A58;
}

loc_805289B0:
{
    r0 = (r16 & 255);
    r0 = (r0 * 240);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 56));
}

loc_805289C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80528A54;
    }
}

loc_805289C8:
{
    r0 = MemoryInline::FlatRead8((r4 + 3280));
}

loc_805289D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80528A1C;
    }
}

loc_805289D4:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + 3264), 0, 8u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r4 + 3264));
    r5 = 1;
    r0 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r4 + 3265));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r1 + 25), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r1 + 24), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r4 + 3266));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r4 + 3267));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r1 + 27), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r1 + 26), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r4 + 3268));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r4 + 3269));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r1 + 29), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r1 + 28), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r4 + 3270));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r4 + 3271));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r1 + 31), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r1 + 30), static_cast<uint8_t>(r3));
    goto loc_80528A20;
}

loc_80528A1C:
{
    r5 = 0;
}

loc_80528A20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80528A24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80528A54;
    }
}

loc_80528A28:
{
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    ctx->lr = 0x80528A34u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C75F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80528A38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80528A54;
    }
}

loc_80528A3C:
{
    r0 = MemoryInline::FlatRead8((r23 + 624));
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80528A4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80528A54;
    }
}

loc_80528A50:
{
    r17 = 0;
}

loc_80528A54:
{
    r16 = (r16 + 1);
}

loc_80528A58:
{
}

loc_80528A5C:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_80528A74;
    }
}

loc_80528A60:
{
    r4 = MemoryInline::FlatRead32((r25 + -10456));
    r3 = (r16 & 255);
    r0 = MemoryInline::FlatRead8((r4 + 36));
}

loc_80528A70:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_805289B0;
    }
}

loc_80528A74:
{
}

loc_80528A78:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_80528ACC;
    }
}

loc_80528A7C:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80528A84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80528ACC;
    }
}

loc_80528A88:
{
    r0 = (r18 & 65535);
    r3 = (r1 + 92);
    r5 = (r28 + r0);
    r4 = 0;
    r6 = MemoryInline::FlatRead8((r5 + 624));
    r5 = 0;
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r6 = (r6 & 65535);
    ctx->lr = 0x80528AACu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CB7E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r3 = MemoryInline::FlatRead32((r1 + 144));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r26_addr_2 = (r26 + r0);
    r0 = MemoryInline::FlatRead32(r26_addr_2);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
}

loc_80528AC4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80528ACC;
    }
}

loc_80528AC8:
{
    r17 = 0;
}

loc_80528ACC:
{
}

loc_80528AD0:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_80528B3C;
    }
}

loc_80528AD4:
{
    r3 = (r18 & 65535);
    r0 = MemoryInline::FlatRead8((r29 + 9));
    r20 = (r28 + r3);
    r4 = MemoryInline::FlatRead8((r20 + 624));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 131070);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80528AEC:
{
    r19 = (r19 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r27_addr_2 = (r27 + r3);
    MemoryInline::FlatWrite16(r27_addr_2, static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80528B3C;
    }
}

loc_80528AFC:
{
    r3 = (r1 + 32);
    r6 = (r0 & 65535);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80528B10u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CB7E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80528B14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80528B3C;
    }
}

loc_80528B18:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r0 = (r0_rot_6 & 1);
}

loc_80528B24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80528B3C;
    }
}

loc_80528B28:
{
    r3 = MemoryInline::FlatRead8((r20 + 624));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 131070);
    r19 = (r19 + 1);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r27_addr_3 = (r27 + r0);
    MemoryInline::FlatWrite16(r27_addr_3, static_cast<uint16_t>(r3));
}

loc_80528B3C:
{
    r18 = (r18 + 1);
}

loc_80528B40:
{
    r0 = MemoryInline::FlatRead8((r28 + 724));
    r3 = (r18 & 65535);
}

loc_80528B4C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_805288B4;
    }
}

loc_80528B50:
{
    r4 = (r19 & 65535);
    r6 = r19;
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r4), static_cast<uint32_t>(200));
}

loc_80528B5C:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80528BE8;
    }
}

loc_80528B60:
{
    r0 = (200 - r19);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(200) >= static_cast<uint32_t>(r19) ? 1u : 0u) << 29);
    r0 = (r0 & 65535);
}

loc_80528B6C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_80528BBC;
    }
}

loc_80528B70:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80528BBC;
    }
}

loc_80528B74:
{
    r0 = (199 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(199) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = -1;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_9 & 536870911);
    ctr = r0;
}

loc_80528B88:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(192))) {
        goto loc_80528BBC;
    }
}

loc_80528B8C:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & 131070);
    r4 = (r1 + 152);
    addr_sthux_80528B94_loc_0 = (r4 + r0);
    guest_range_5 = MemoryInline::ResolveRangeHost(addr_sthux_80528B94_loc_0, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_5, 0u, addr_sthux_80528B94_loc_0, static_cast<uint16_t>(r3));
    r4 = addr_sthux_80528B94_loc_0;
    r6 = (r6 + 8);
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_5, 2u, (r4 + 2), r3);
        MemoryInline::WriteResolved16(guest_range_5, 4u, (r4 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 6u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_5, 6u, (r4 + 6), r3);
        MemoryInline::WriteResolved16(guest_range_5, 8u, (r4 + 8), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 10u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_5, 10u, (r4 + 10), r3);
        MemoryInline::WriteResolved16(guest_range_5, 12u, (r4 + 12), r3);
    }
    MemoryInline::WriteResolved16(guest_range_5, 14u, (r4 + 14), static_cast<uint16_t>(r3));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80528B8C;
    }
}

loc_80528BBC:
{
    r3 = (r6 & 65535);
    r4 = (r1 + 152);
    r0 = (200 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(200) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r5 = -1;
    ctr = r0;
}

loc_80528BD4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(200))) {
        goto loc_80528BE8;
    }
}

loc_80528BD8:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & 131070);
    r6 = (r6 + 1);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_2, static_cast<uint16_t>(r5));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80528BD8;
    }
}

loc_80528BE8:
{
    r3 = r30;
    r4 = 100;
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_1 = r0;
    r0 = (r8 + r0_addc_right_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_1 + r6);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r4 = 0x809C0000u;
    r5 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32((r4 + -10424));
    r3 = (r3 + 131072);
    r3 = MemoryInline::FlatRead32((r3 + 20476));
    r3 = (r3 + 131072);
    r0 = MemoryInline::FlatRead32((r3 + 13068));
    r0 = (r0 & 32);
}

loc_80528C14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80528C24;
    }
}

loc_80528C18:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80528C20:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80528D64;
    }
}

loc_80528C24:
{
    r4 = (r19 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80528C28:
{
    r16 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80528CFC;
    }
}

loc_80528C30:
{
    r3 = r30;
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_4 = r0;
    r0 = (r8 + r0_addc_right_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_4)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_4 = r0;
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_4 + r6);
    r0 = (r0 + r0_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_19 & 131070);
    r3 = (r1 + 152);
    r3_addr_3 = (r3 + r0);
    r17 = MemoryInline::FlatRead16(r3_addr_3);
    r4 = r31;
    r3 = 184;
    r5 = 4;
    ctx->lr = 0x80528C54u;
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80229DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80528C58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80528CCC;
    }
}

loc_80528C5C:
{
    r4 = 0x808B0000u;
    r7 = 0x80890000u;
    r4 = (r4 + 12616);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 167u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    r8 = 0;
    r7 = (r7 + -672);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r8);
    r4 = -1;
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 8), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 9), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 164u, (r3 + 164), static_cast<uint8_t>(r8));
    r6 = MemoryInline::FlatRead8((r7 + 1));
    r5 = MemoryInline::FlatRead8((r7 + 2));
    r4 = MemoryInline::FlatRead8((r7 + 3));
    r7 = MemoryInline::FlatRead8(r7);
    MemoryInline::WriteResolved8(guest_range_0, 96u, (r3 + 96), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 97u, (r3 + 97), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 98u, (r3 + 98), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 99u, (r3 + 99), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r8);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    MemoryInline::WriteResolved8(guest_range_0, 165u, (r3 + 165), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 166u, (r3 + 166), static_cast<uint8_t>(r8));
}

loc_80528CCC:
{
    r16 = r3;
    r4 = r17;
    r5 = -1;
    ctx->lr = 0x80528CDCu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80526020u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(29));
    r0 = (r0_rot_20 & 255);
    r3 = (r17 & 7);
    r5 = (r29 + r0);
    r4 = 1;
    r0 = MemoryInline::FlatRead8((r5 + 17));
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite8((r5 + 17), static_cast<uint8_t>(r0));
}

loc_80528CFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(0));
}

loc_80528D00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80528E90;
    }
}

loc_80528D04:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(100));
}

loc_80528D0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80528D28;
    }
}

loc_80528D10:
{
    r3 = r28;
    r4 = r31;
    r5 = r29;
    r6 = r30;
    ctx->lr = 0x80528D24u;
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805282B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80528D2C;
}

loc_80528D28:
{
    r3 = 0;
}

loc_80528D2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80528D30:
{
    r16 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80528E90;
    }
}

loc_80528D38:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80528D40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80528D48;
    }
}

loc_80528D44:
{
    goto loc_80528E94;
}

loc_80528D48:
{
    r3 = r28;
    r4 = r31;
    r5 = r29;
    r6 = r30;
    ctx->lr = 0x80528D5Cu;
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80528598u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r16 = r3;
    goto loc_80528E90;
}

loc_80528D64:
{
    r3 = r28;
    r4 = r31;
    r5 = r29;
    r6 = r30;
    ctx->lr = 0x80528D78u;
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805282B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80528D7C:
{
    r16 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80528E90;
    }
}

loc_80528D84:
{
    r4 = (r19 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80528D88:
{
    r16 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80528E5C;
    }
}

loc_80528D90:
{
    r3 = r30;
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_2 = r0;
    r0 = (r8 + r0_addc_right_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_2 + r6);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & 131070);
    r3 = (r1 + 152);
    r3_addr_1 = (r3 + r0);
    r17 = MemoryInline::FlatRead16(r3_addr_1);
    r4 = r31;
    r3 = 184;
    r5 = 4;
    ctx->lr = 0x80528DB4u;
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80229DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80528DB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80528E2C;
    }
}

loc_80528DBC:
{
    r4 = 0x808B0000u;
    r7 = 0x80890000u;
    r4 = (r4 + 12616);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 167u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r4);
    r8 = 0;
    r7 = (r7 + -672);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r8);
    r4 = -1;
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 8), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 9), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 164u, (r3 + 164), static_cast<uint8_t>(r8));
    r6 = MemoryInline::FlatRead8((r7 + 1));
    r5 = MemoryInline::FlatRead8((r7 + 2));
    r4 = MemoryInline::FlatRead8((r7 + 3));
    r7 = MemoryInline::FlatRead8(r7);
    MemoryInline::WriteResolved8(guest_range_1, 96u, (r3 + 96), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 97u, (r3 + 97), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 98u, (r3 + 98), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 99u, (r3 + 99), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 100), r8);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    MemoryInline::WriteResolved8(guest_range_1, 165u, (r3 + 165), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 166u, (r3 + 166), static_cast<uint8_t>(r8));
}

loc_80528E2C:
{
    r16 = r3;
    r4 = r17;
    r5 = -1;
    ctx->lr = 0x80528E3Cu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80526020u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(29));
    r0 = (r0_rot_17 & 255);
    r3 = (r17 & 7);
    r5 = (r29 + r0);
    r4 = 1;
    r0 = MemoryInline::FlatRead8((r5 + 17));
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite8((r5 + 17), static_cast<uint8_t>(r0));
}

loc_80528E5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(0));
}

loc_80528E60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80528E90;
    }
}

loc_80528E64:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80528E6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80528E78;
    }
}

loc_80528E70:
{
    r3 = r16;
    goto loc_80528E94;
}

loc_80528E78:
{
    r3 = r28;
    r4 = r31;
    r5 = r29;
    r6 = r30;
    ctx->lr = 0x80528E8Cu;
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80528598u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r16 = r3;
}

loc_80528E90:
{
    r3 = r16;
}

loc_80528E94:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 560), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r1 + 560));
            r17 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r1 + 564));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r1 + 568));
            r19 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r1 + 572));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r1 + 576));
            r21 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r1 + 580));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r1 + 584));
            r23 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r1 + 588));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r1 + 592));
            r25 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r1 + 596));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r1 + 600));
            r27 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r1 + 604));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r1 + 608));
            r29 = MemoryInline::ReadResolved32(guest_range_6, 52u, (r1 + 612));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_6, 56u, (r1 + 616));
            r31 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r1 + 620));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_6, 68u, (r1 + 628));
    ctx->lr = r0;
    r1 = (r1 + 624);
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805287BC func_805287BC preserves=true fpr_mask=0x00000000
