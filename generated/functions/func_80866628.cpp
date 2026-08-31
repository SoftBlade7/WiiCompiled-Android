#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_80866628(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80866628;

loc_80866628:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 128), 0, 1661u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 49u, (r3 + 177));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086664C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866B00;
    }
}

loc_80866650:
{
    r5 = 0x809C0000u;
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1644u, (r3 + 1772));
    r5 = MemoryInline::FlatRead32((r5 + -10448));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    r0 = MemoryInline::FlatRead32((r5 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80866670:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866B00;
    }
}

loc_80866674:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1660u, (r3 + 1788));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086667C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866B00;
    }
}

loc_80866680:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1658u, (r3 + 1786));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80866688:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866B00;
    }
}

loc_8086668C:
{
    r5 = 0x809C0000u;
    r31 = -1;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 2920));
}

loc_808666A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(18))) {
        goto loc_808666AC;
    }
}

loc_808666A4:
{
}

loc_808666A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(35))) {
        goto loc_808669E8;
    }
}

loc_808666AC:
{
}

loc_808666B0:
{
    r6 = 874;
    r7 = 875;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(35))) {
        goto loc_808666C4;
    }
}

loc_808666BC:
{
    r6 = 781;
    r7 = 782;
}

loc_808666C4:
{
}

loc_808666C8:
{
    r31 = r6;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_808666D4;
    }
}

loc_808666D0:
{
    r31 = r7;
}

loc_808666D4:
{
}

loc_808666D8:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r7))) {
        goto loc_80866864;
    }
}

loc_808666DC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808666E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086670C;
    }
}

loc_808666EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808666F8;
    }
}

loc_808666F0:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_808666FC;
}

loc_808666F8:
{
    r0 = -1;
}

loc_808666FC:
{
}

loc_80866700:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_8086670C;
    }
}

loc_80866704:
{
    r5 = (r3 + 128);
    goto loc_8086678C;
}

loc_8086670C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80866714:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866738;
    }
}

loc_80866718:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866724;
    }
}

loc_8086671C:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80866728;
}

loc_80866724:
{
    r0 = -1;
}

loc_80866728:
{
}

loc_8086672C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_80866738;
    }
}

loc_80866730:
{
    r5 = (r3 + 132);
    goto loc_8086678C;
}

loc_80866738:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80866740:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866764;
    }
}

loc_80866744:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866750;
    }
}

loc_80866748:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80866754;
}

loc_80866750:
{
    r0 = -1;
}

loc_80866754:
{
}

loc_80866758:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_80866764;
    }
}

loc_8086675C:
{
    r5 = (r3 + 136);
    goto loc_8086678C;
}

loc_80866764:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8086676C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086678C;
    }
}

loc_80866770:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086677C;
    }
}

loc_80866774:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80866780;
}

loc_8086677C:
{
    r0 = -1;
}

loc_80866780:
{
}

loc_80866784:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_8086678C;
    }
}

loc_80866788:
{
    r5 = (r3 + 140);
}

loc_8086678C:
{
}

loc_80866790:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80866844;
    }
}

loc_80866794:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808667A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808667C4;
    }
}

loc_808667A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808667B0;
    }
}

loc_808667A8:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_808667B4;
}

loc_808667B0:
{
    r0 = -1;
}

loc_808667B4:
{
}

loc_808667B8:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_808667C4;
    }
}

loc_808667BC:
{
    r5 = (r3 + 128);
    goto loc_80866844;
}

loc_808667C4:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808667CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808667F0;
    }
}

loc_808667D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808667DC;
    }
}

loc_808667D4:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_808667E0;
}

loc_808667DC:
{
    r0 = -1;
}

loc_808667E0:
{
}

loc_808667E4:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_808667F0;
    }
}

loc_808667E8:
{
    r5 = (r3 + 132);
    goto loc_80866844;
}

loc_808667F0:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808667F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086681C;
    }
}

loc_808667FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866808;
    }
}

loc_80866800:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8086680C;
}

loc_80866808:
{
    r0 = -1;
}

loc_8086680C:
{
}

loc_80866810:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_8086681C;
    }
}

loc_80866814:
{
    r5 = (r3 + 136);
    goto loc_80866844;
}

loc_8086681C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80866824:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866844;
    }
}

loc_80866828:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866834;
    }
}

loc_8086682C:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80866838;
}

loc_80866834:
{
    r0 = -1;
}

loc_80866838:
{
}

loc_8086683C:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80866844;
    }
}

loc_80866840:
{
    r5 = (r3 + 140);
}

loc_80866844:
{
}

loc_80866848:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_808669E8;
    }
}

loc_8086684C:
{
    r3 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80866854:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808669E8;
    }
}

loc_80866858:
{
    r4 = 30;
    ctx->lr = 0x80866860u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_808669E8;
}

loc_80866864:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80866870:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866894;
    }
}

loc_80866874:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866880;
    }
}

loc_80866878:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_80866884;
}

loc_80866880:
{
    r0 = -1;
}

loc_80866884:
{
}

loc_80866888:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80866894;
    }
}

loc_8086688C:
{
    r4 = (r3 + 128);
    goto loc_80866914;
}

loc_80866894:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8086689C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808668C0;
    }
}

loc_808668A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808668AC;
    }
}

loc_808668A4:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_808668B0;
}

loc_808668AC:
{
    r0 = -1;
}

loc_808668B0:
{
}

loc_808668B4:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_808668C0;
    }
}

loc_808668B8:
{
    r4 = (r3 + 132);
    goto loc_80866914;
}

loc_808668C0:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_808668C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808668EC;
    }
}

loc_808668CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808668D8;
    }
}

loc_808668D0:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_808668DC;
}

loc_808668D8:
{
    r0 = -1;
}

loc_808668DC:
{
}

loc_808668E0:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_808668EC;
    }
}

loc_808668E4:
{
    r4 = (r3 + 136);
    goto loc_80866914;
}

loc_808668EC:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_808668F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866914;
    }
}

loc_808668F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866904;
    }
}

loc_808668FC:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_80866908;
}

loc_80866904:
{
    r0 = -1;
}

loc_80866908:
{
}

loc_8086690C:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80866914;
    }
}

loc_80866910:
{
    r4 = (r3 + 140);
}

loc_80866914:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80866918:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866B00;
    }
}

loc_8086691C:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80866928:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086694C;
    }
}

loc_8086692C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866938;
    }
}

loc_80866930:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_8086693C;
}

loc_80866938:
{
    r0 = -1;
}

loc_8086693C:
{
}

loc_80866940:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_8086694C;
    }
}

loc_80866944:
{
    r4 = (r3 + 128);
    goto loc_808669CC;
}

loc_8086694C:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80866954:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866978;
    }
}

loc_80866958:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866964;
    }
}

loc_8086695C:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_80866968;
}

loc_80866964:
{
    r0 = -1;
}

loc_80866968:
{
}

loc_8086696C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_80866978;
    }
}

loc_80866970:
{
    r4 = (r3 + 132);
    goto loc_808669CC;
}

loc_80866978:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80866980:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808669A4;
    }
}

loc_80866984:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866990;
    }
}

loc_80866988:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_80866994;
}

loc_80866990:
{
    r0 = -1;
}

loc_80866994:
{
}

loc_80866998:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_808669A4;
    }
}

loc_8086699C:
{
    r4 = (r3 + 136);
    goto loc_808669CC;
}

loc_808669A4:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_808669AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808669CC;
    }
}

loc_808669B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808669BC;
    }
}

loc_808669B4:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_808669C0;
}

loc_808669BC:
{
    r0 = -1;
}

loc_808669C0:
{
}

loc_808669C4:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_808669CC;
    }
}

loc_808669C8:
{
    r4 = (r3 + 140);
}

loc_808669CC:
{
}

loc_808669D0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_808669E8;
    }
}

loc_808669D4:
{
    r3 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808669DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808669E8;
    }
}

loc_808669E0:
{
    r4 = 30;
    ctx->lr = 0x808669E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_808669E8:
{
    r0 = (r31 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_808669F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866B00;
    }
}

loc_808669F4:
{
    r3 = (r30 + 148);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_47B8 = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_47B8[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_47B8[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x807028E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80866A00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866B00;
    }
}

loc_80866A04:
{
    r3 = MemoryInline::FlatRead32((r30 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80866A0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866A18;
    }
}

loc_80866A10:
{
    r29 = (r30 + 128);
    goto loc_80866AE4;
}

loc_80866A18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866A24;
    }
}

loc_80866A1C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80866A28;
}

loc_80866A24:
{
    r0 = -1;
}

loc_80866A28:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r30 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80866A34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866A40;
    }
}

loc_80866A38:
{
    r29 = (r30 + 132);
    goto loc_80866AE4;
}

loc_80866A40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866A4C;
    }
}

loc_80866A44:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80866A50;
}

loc_80866A4C:
{
    r0 = -1;
}

loc_80866A50:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r30 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80866A5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866A68;
    }
}

loc_80866A60:
{
    r29 = (r30 + 136);
    goto loc_80866AE4;
}

loc_80866A68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866A74;
    }
}

loc_80866A6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80866A78;
}

loc_80866A74:
{
    r0 = -1;
}

loc_80866A78:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r30 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80866A84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866A90;
    }
}

loc_80866A88:
{
    r29 = (r30 + 140);
    goto loc_80866AE4;
}

loc_80866A90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866A9C;
    }
}

loc_80866A94:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80866AA0;
}

loc_80866A9C:
{
    r0 = -1;
}

loc_80866AA0:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r31;
    r3 = (r30 + 148);
    r5 = (r1 + 8);
    r6 = 4;
    ctx->lr = 0x80866AB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80702848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80866ABC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80866AC8;
    }
}

loc_80866AC0:
{
    r29 = 0;
    goto loc_80866AE4;
}

loc_80866AC8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r29 = (r30 + r0);
    r29 = (r29 + 128);
    r3 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80866AD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866AE4;
    }
}

loc_80866ADC:
{
    r4 = 0;
    ctx->lr = 0x80866AE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80866AE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80866AE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866B00;
    }
}

loc_80866AEC:
{
    r3 = r30;
    r4 = r29;
    r5 = r31;
    r6 = 0;
    ctx->lr = 0x80866B00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A3E80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80866B00:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80866628 func_80866628 preserves=true fpr_mask=0x00000000
