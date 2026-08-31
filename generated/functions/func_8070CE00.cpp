#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_8070CE00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8070CE00;

loc_8070CE00:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 128), 0, 50u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 49u, (r3 + 177));
    r31 = 0x808A0000u;
    f31.d = f1.d;
    r29 = r3;
}

loc_8070CE30:
{
    r30 = r4;
    r31 = (r31 + 7416);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070CEAC;
    }
}

loc_8070CE3C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r3 + 156));
}

loc_8070CE44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(207))) {
        goto loc_8070CEAC;
    }
}

loc_8070CE48:
{
}

loc_8070CE4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(214))) {
        goto loc_8070CEAC;
    }
}

loc_8070CE50:
{
}

loc_8070CE54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(234))) {
        goto loc_8070CEAC;
    }
}

loc_8070CE58:
{
}

loc_8070CE5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(508))) {
        goto loc_8070CEAC;
    }
}

loc_8070CE60:
{
}

loc_8070CE64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(530))) {
        goto loc_8070CE7C;
    }
}

loc_8070CE68:
{
}

loc_8070CE6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(534))) {
        goto loc_8070CE7C;
    }
}

loc_8070CE70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8602));
}

loc_8070CE74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070CE8C;
    }
}

loc_8070CE78:
{
    goto loc_8070CEA4;
}

loc_8070CE7C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(474));
}

loc_8070CE80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070CEAC;
    }
}

loc_8070CE84:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070CE8C:
{
}

loc_8070CE90:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(501))) {
        goto loc_8070CEAC;
    }
}

loc_8070CE94:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(503));
}

loc_8070CE98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070CEAC;
    }
}

loc_8070CE9C:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070CEA4:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070CEAC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(214));
}

loc_8070CEB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D558;
    }
}

loc_8070CEB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070CEE0;
    }
}

loc_8070CEBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(208));
}

loc_8070CEC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070CF0C;
    }
}

loc_8070CEC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070CED4;
    }
}

loc_8070CEC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(204));
}

loc_8070CECC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D490;
    }
}

loc_8070CED0:
{
    goto loc_8070D64C;
}

loc_8070CED4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(210));
}

loc_8070CED8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070D64C;
    }
}

loc_8070CEDC:
{
    goto loc_8070D0FC;
}

loc_8070CEE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(411));
}

loc_8070CEE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D2E4;
    }
}

loc_8070CEE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070CF00;
    }
}

loc_8070CEEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(233));
}

loc_8070CEF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070D64C;
    }
}

loc_8070CEF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(231));
}

loc_8070CEF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070D490;
    }
}

loc_8070CEFC:
{
    goto loc_8070D64C;
}

loc_8070CF00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8602));
}

loc_8070CF04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D630;
    }
}

loc_8070CF08:
{
    goto loc_8070D64C;
}

loc_8070CF0C:
{
}

loc_8070CF10:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(519))) {
        goto loc_8070CF20;
    }
}

loc_8070CF14:
{
}

loc_8070CF18:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(522))) {
        goto loc_8070CFD4;
    }
}

loc_8070CF1C:
{
    goto loc_8070D020;
}

loc_8070CF20:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
}

loc_8070CF28:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8070CF34;
    }
}

loc_8070CF2C:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070CF38;
}

loc_8070CF34:
{
    r4 = -1;
}

loc_8070CF38:
{
    r0 = (r4 + -522);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8070CF40:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8070CF4C;
    }
}

loc_8070CF44:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070CF4C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
}

loc_8070CF54:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8070CF60;
    }
}

loc_8070CF58:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070CF64;
}

loc_8070CF60:
{
    r4 = -1;
}

loc_8070CF64:
{
    r0 = (r4 + -522);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8070CF6C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8070CF78;
    }
}

loc_8070CF70:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070CF78:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
}

loc_8070CF80:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8070CF8C;
    }
}

loc_8070CF84:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070CF90;
}

loc_8070CF8C:
{
    r4 = -1;
}

loc_8070CF90:
{
    r0 = (r4 + -522);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8070CF98:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8070CFA4;
    }
}

loc_8070CF9C:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070CFA4:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
}

loc_8070CFAC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8070CFB8;
    }
}

loc_8070CFB0:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070CFBC;
}

loc_8070CFB8:
{
    r4 = -1;
}

loc_8070CFBC:
{
    r0 = (r4 + -522);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8070CFC4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8070D020;
    }
}

loc_8070CFC8:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070CFD4:
{
    r28 = r29;
    r27 = 0;
}

loc_8070CFDC:
{
    r3 = MemoryInline::FlatRead32((r28 + 128));
}

loc_8070CFE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8070CFF0;
    }
}

loc_8070CFE8:
{
    r4 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070CFF4;
}

loc_8070CFF0:
{
    r4 = -1;
}

loc_8070CFF4:
{
    r0 = (r4 + -519);
}

loc_8070CFFC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8070D010;
    }
}

loc_8070D000:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070D004:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D010;
    }
}

loc_8070D008:
{
    r4 = 0;
    ctx->lr = 0x8070D010u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8070D010:
{
    r27 = (r27 + 1);
    r28 = (r28 + 4);
}

loc_8070D01C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_8070CFDC;
    }
}

loc_8070D020:
{
}

loc_8070D024:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(519))) {
        goto loc_8070D030;
    }
}

loc_8070D028:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(522));
}

loc_8070D02C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D64C;
    }
}

loc_8070D030:
{
    r4 = MemoryInline::FlatRead32((r29 + 152));
    r3 = 1431633920;
    r5 = MemoryInline::FlatRead32((r29 + 128));
    r0 = (r3 + 21846);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_8070D048:
{
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 3);
    r0 = (r4 - r0);
    r30 = (r30 + r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8070D06C;
    }
}

loc_8070D064:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_8070D070;
}

loc_8070D06C:
{
    r0 = -1;
}

loc_8070D070:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_8070D074:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D080;
    }
}

loc_8070D078:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D080:
{
    r5 = MemoryInline::FlatRead32((r29 + 132));
}

loc_8070D088:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8070D094;
    }
}

loc_8070D08C:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_8070D098;
}

loc_8070D094:
{
    r0 = -1;
}

loc_8070D098:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_8070D09C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D0A8;
    }
}

loc_8070D0A0:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D0A8:
{
    r5 = MemoryInline::FlatRead32((r29 + 136));
}

loc_8070D0B0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8070D0BC;
    }
}

loc_8070D0B4:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_8070D0C0;
}

loc_8070D0BC:
{
    r0 = -1;
}

loc_8070D0C0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_8070D0C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D0D0;
    }
}

loc_8070D0C8:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D0D0:
{
    r5 = MemoryInline::FlatRead32((r29 + 140));
}

loc_8070D0D8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8070D0E4;
    }
}

loc_8070D0DC:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_8070D0E8;
}

loc_8070D0E4:
{
    r0 = -1;
}

loc_8070D0E8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_8070D0EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D64C;
    }
}

loc_8070D0F0:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D0FC:
{
}

loc_8070D100:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(509))) {
        goto loc_8070D110;
    }
}

loc_8070D104:
{
}

loc_8070D108:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(513))) {
        goto loc_8070D1C4;
    }
}

loc_8070D10C:
{
    goto loc_8070D210;
}

loc_8070D110:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
}

loc_8070D118:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8070D124;
    }
}

loc_8070D11C:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070D128;
}

loc_8070D124:
{
    r4 = -1;
}

loc_8070D128:
{
    r0 = (r4 + -513);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8070D130:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8070D13C;
    }
}

loc_8070D134:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D13C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
}

loc_8070D144:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8070D150;
    }
}

loc_8070D148:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070D154;
}

loc_8070D150:
{
    r4 = -1;
}

loc_8070D154:
{
    r0 = (r4 + -513);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8070D15C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8070D168;
    }
}

loc_8070D160:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D168:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
}

loc_8070D170:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8070D17C;
    }
}

loc_8070D174:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070D180;
}

loc_8070D17C:
{
    r4 = -1;
}

loc_8070D180:
{
    r0 = (r4 + -513);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8070D188:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8070D194;
    }
}

loc_8070D18C:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D194:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
}

loc_8070D19C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8070D1A8;
    }
}

loc_8070D1A0:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070D1AC;
}

loc_8070D1A8:
{
    r4 = -1;
}

loc_8070D1AC:
{
    r0 = (r4 + -513);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8070D1B4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8070D210;
    }
}

loc_8070D1B8:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D1C4:
{
    r28 = r29;
    r27 = 0;
}

loc_8070D1CC:
{
    r3 = MemoryInline::FlatRead32((r28 + 128));
}

loc_8070D1D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8070D1E0;
    }
}

loc_8070D1D8:
{
    r4 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070D1E4;
}

loc_8070D1E0:
{
    r4 = -1;
}

loc_8070D1E4:
{
    r0 = (r4 + -509);
}

loc_8070D1EC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_8070D200;
    }
}

loc_8070D1F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070D1F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D200;
    }
}

loc_8070D1F8:
{
    r4 = 0;
    ctx->lr = 0x8070D200u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8070D200:
{
    r27 = (r27 + 1);
    r28 = (r28 + 4);
}

loc_8070D20C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_8070D1CC;
    }
}

loc_8070D210:
{
}

loc_8070D214:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(509))) {
        goto loc_8070D220;
    }
}

loc_8070D218:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(513));
}

loc_8070D21C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D64C;
    }
}

loc_8070D220:
{
    r3 = MemoryInline::FlatRead32((r29 + 152));
    r4 = MemoryInline::FlatRead32((r29 + 128));
    r3 = MemoryInline::FlatRead32((r3 + 164));
}

loc_8070D230:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & -1073741824);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -1);
    r0 = (r0 + r3);
    r30 = (r30 + r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8070D254;
    }
}

loc_8070D24C:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070D258;
}

loc_8070D254:
{
    r0 = -1;
}

loc_8070D258:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_8070D25C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D268;
    }
}

loc_8070D260:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D268:
{
    r4 = MemoryInline::FlatRead32((r29 + 132));
}

loc_8070D270:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8070D27C;
    }
}

loc_8070D274:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070D280;
}

loc_8070D27C:
{
    r0 = -1;
}

loc_8070D280:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_8070D284:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D290;
    }
}

loc_8070D288:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D290:
{
    r4 = MemoryInline::FlatRead32((r29 + 136));
}

loc_8070D298:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8070D2A4;
    }
}

loc_8070D29C:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070D2A8;
}

loc_8070D2A4:
{
    r0 = -1;
}

loc_8070D2A8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_8070D2AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D2B8;
    }
}

loc_8070D2B0:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D2B8:
{
    r4 = MemoryInline::FlatRead32((r29 + 140));
}

loc_8070D2C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8070D2CC;
    }
}

loc_8070D2C4:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070D2D0;
}

loc_8070D2CC:
{
    r0 = -1;
}

loc_8070D2D0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_8070D2D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D64C;
    }
}

loc_8070D2D8:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D2E4:
{
}

loc_8070D2E8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(704))) {
        goto loc_8070D300;
    }
}

loc_8070D2EC:
{
}

loc_8070D2F0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(702))) {
        goto loc_8070D3C0;
    }
}

loc_8070D2F4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(705));
}

loc_8070D2F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D3C0;
    }
}

loc_8070D2FC:
{
    goto loc_8070D64C;
}

loc_8070D300:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070D30C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D330;
    }
}

loc_8070D310:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D31C;
    }
}

loc_8070D314:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070D320;
}

loc_8070D31C:
{
    r0 = -1;
}

loc_8070D320:
{
}

loc_8070D324:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070D330;
    }
}

loc_8070D328:
{
    r5 = (r3 + 128);
    goto loc_8070D3B0;
}

loc_8070D330:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070D338:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D35C;
    }
}

loc_8070D33C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D348;
    }
}

loc_8070D340:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070D34C;
}

loc_8070D348:
{
    r0 = -1;
}

loc_8070D34C:
{
}

loc_8070D350:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070D35C;
    }
}

loc_8070D354:
{
    r5 = (r3 + 132);
    goto loc_8070D3B0;
}

loc_8070D35C:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070D364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D388;
    }
}

loc_8070D368:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D374;
    }
}

loc_8070D36C:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070D378;
}

loc_8070D374:
{
    r0 = -1;
}

loc_8070D378:
{
}

loc_8070D37C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070D388;
    }
}

loc_8070D380:
{
    r5 = (r3 + 136);
    goto loc_8070D3B0;
}

loc_8070D388:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070D390:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D3B0;
    }
}

loc_8070D394:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D3A0;
    }
}

loc_8070D398:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070D3A4;
}

loc_8070D3A0:
{
    r0 = -1;
}

loc_8070D3A4:
{
}

loc_8070D3A8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070D3B0;
    }
}

loc_8070D3AC:
{
    r5 = (r3 + 140);
}

loc_8070D3B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8070D3B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D64C;
    }
}

loc_8070D3B8:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D3C0:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070D3CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D3F0;
    }
}

loc_8070D3D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D3DC;
    }
}

loc_8070D3D4:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070D3E0;
}

loc_8070D3DC:
{
    r0 = -1;
}

loc_8070D3E0:
{
}

loc_8070D3E4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070D3F0;
    }
}

loc_8070D3E8:
{
    r5 = (r3 + 128);
    goto loc_8070D470;
}

loc_8070D3F0:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070D3F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D41C;
    }
}

loc_8070D3FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D408;
    }
}

loc_8070D400:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070D40C;
}

loc_8070D408:
{
    r0 = -1;
}

loc_8070D40C:
{
}

loc_8070D410:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070D41C;
    }
}

loc_8070D414:
{
    r5 = (r3 + 132);
    goto loc_8070D470;
}

loc_8070D41C:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070D424:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D448;
    }
}

loc_8070D428:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D434;
    }
}

loc_8070D42C:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070D438;
}

loc_8070D434:
{
    r0 = -1;
}

loc_8070D438:
{
}

loc_8070D43C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070D448;
    }
}

loc_8070D440:
{
    r5 = (r3 + 136);
    goto loc_8070D470;
}

loc_8070D448:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070D450:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D470;
    }
}

loc_8070D454:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D460;
    }
}

loc_8070D458:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070D464;
}

loc_8070D460:
{
    r0 = -1;
}

loc_8070D464:
{
}

loc_8070D468:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070D470;
    }
}

loc_8070D46C:
{
    r5 = (r3 + 140);
}

loc_8070D470:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8070D474:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D64C;
    }
}

loc_8070D478:
{
    r3 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070D480:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D64C;
    }
}

loc_8070D484:
{
    r4 = 0;
    ctx->lr = 0x8070D48Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8070D64C;
}

loc_8070D490:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(688));
}

loc_8070D494:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D64C;
    }
}

loc_8070D498:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070D4A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D4C8;
    }
}

loc_8070D4A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D4B4;
    }
}

loc_8070D4AC:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070D4B8;
}

loc_8070D4B4:
{
    r0 = -1;
}

loc_8070D4B8:
{
}

loc_8070D4BC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070D4C8;
    }
}

loc_8070D4C0:
{
    r5 = (r3 + 128);
    goto loc_8070D548;
}

loc_8070D4C8:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070D4D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D4F4;
    }
}

loc_8070D4D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D4E0;
    }
}

loc_8070D4D8:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070D4E4;
}

loc_8070D4E0:
{
    r0 = -1;
}

loc_8070D4E4:
{
}

loc_8070D4E8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070D4F4;
    }
}

loc_8070D4EC:
{
    r5 = (r3 + 132);
    goto loc_8070D548;
}

loc_8070D4F4:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070D4FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D520;
    }
}

loc_8070D500:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D50C;
    }
}

loc_8070D504:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070D510;
}

loc_8070D50C:
{
    r0 = -1;
}

loc_8070D510:
{
}

loc_8070D514:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070D520;
    }
}

loc_8070D518:
{
    r5 = (r3 + 136);
    goto loc_8070D548;
}

loc_8070D520:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070D528:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D548;
    }
}

loc_8070D52C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D538;
    }
}

loc_8070D530:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070D53C;
}

loc_8070D538:
{
    r0 = -1;
}

loc_8070D53C:
{
}

loc_8070D540:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070D548;
    }
}

loc_8070D544:
{
    r5 = (r3 + 140);
}

loc_8070D548:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8070D54C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D64C;
    }
}

loc_8070D550:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D558:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(726));
}

loc_8070D55C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D64C;
    }
}

loc_8070D560:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8070D56C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D590;
    }
}

loc_8070D570:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D57C;
    }
}

loc_8070D574:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_8070D580;
}

loc_8070D57C:
{
    r0 = -1;
}

loc_8070D580:
{
}

loc_8070D584:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(725))) {
        goto loc_8070D590;
    }
}

loc_8070D588:
{
    r4 = (r3 + 128);
    goto loc_8070D610;
}

loc_8070D590:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8070D598:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D5BC;
    }
}

loc_8070D59C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D5A8;
    }
}

loc_8070D5A0:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_8070D5AC;
}

loc_8070D5A8:
{
    r0 = -1;
}

loc_8070D5AC:
{
}

loc_8070D5B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(725))) {
        goto loc_8070D5BC;
    }
}

loc_8070D5B4:
{
    r4 = (r3 + 132);
    goto loc_8070D610;
}

loc_8070D5BC:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8070D5C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D5E8;
    }
}

loc_8070D5C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D5D4;
    }
}

loc_8070D5CC:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_8070D5D8;
}

loc_8070D5D4:
{
    r0 = -1;
}

loc_8070D5D8:
{
}

loc_8070D5DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(725))) {
        goto loc_8070D5E8;
    }
}

loc_8070D5E0:
{
    r4 = (r3 + 136);
    goto loc_8070D610;
}

loc_8070D5E8:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8070D5F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D610;
    }
}

loc_8070D5F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D600;
    }
}

loc_8070D5F8:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_8070D604;
}

loc_8070D600:
{
    r0 = -1;
}

loc_8070D604:
{
}

loc_8070D608:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(725))) {
        goto loc_8070D610;
    }
}

loc_8070D60C:
{
    r4 = (r3 + 140);
}

loc_8070D610:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070D614:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D64C;
    }
}

loc_8070D618:
{
    r3 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070D620:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D64C;
    }
}

loc_8070D624:
{
    r4 = 0;
    ctx->lr = 0x8070D62Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8070D64C;
}

loc_8070D630:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    r0 = MemoryInline::FlatRead32((r3 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8070D640:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D64C;
    }
}

loc_8070D644:
{
    r3 = 0;
    goto loc_8070D958;
}

loc_8070D64C:
{
    r3 = (r29 + 148);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_9B77 = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_9B77[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_9B77[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x807028E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8070D658:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8070D664;
    }
}

loc_8070D65C:
{
    r28 = 0;
    goto loc_8070D768;
}

loc_8070D664:
{
    r3 = MemoryInline::FlatRead32((r29 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070D66C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D678;
    }
}

loc_8070D670:
{
    r28 = (r29 + 128);
    goto loc_8070D744;
}

loc_8070D678:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D684;
    }
}

loc_8070D67C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070D688;
}

loc_8070D684:
{
    r0 = -1;
}

loc_8070D688:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070D694:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D6A0;
    }
}

loc_8070D698:
{
    r28 = (r29 + 132);
    goto loc_8070D744;
}

loc_8070D6A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D6AC;
    }
}

loc_8070D6A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070D6B0;
}

loc_8070D6AC:
{
    r0 = -1;
}

loc_8070D6B0:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r29 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070D6BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D6C8;
    }
}

loc_8070D6C0:
{
    r28 = (r29 + 136);
    goto loc_8070D744;
}

loc_8070D6C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D6D4;
    }
}

loc_8070D6CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070D6D8;
}

loc_8070D6D4:
{
    r0 = -1;
}

loc_8070D6D8:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r29 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070D6E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D6F0;
    }
}

loc_8070D6E8:
{
    r28 = (r29 + 140);
    goto loc_8070D744;
}

loc_8070D6F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D6FC;
    }
}

loc_8070D6F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070D700;
}

loc_8070D6FC:
{
    r0 = -1;
}

loc_8070D700:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r30;
    r3 = (r29 + 148);
    r5 = (r1 + 8);
    r6 = 4;
    ctx->lr = 0x8070D718u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8070D71C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8070D728;
    }
}

loc_8070D720:
{
    r28 = 0;
    goto loc_8070D744;
}

loc_8070D728:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r28 = (r29 + r0);
    r28 = (r28 + 128);
    r3 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070D738:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D744;
    }
}

loc_8070D73C:
{
    r4 = 0;
    ctx->lr = 0x8070D744u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8070D744:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8070D748:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D764;
    }
}

loc_8070D74C:
{
    r3 = r29;
    r4 = r28;
    r5 = r30;
    r6 = 0;
    ctx->lr = 0x8070D760u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A3E80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8070D768;
}

loc_8070D764:
{
    r28 = 0;
}

loc_8070D768:
{
}

loc_8070D76C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8070D790;
    }
}

loc_8070D770:
{
}

loc_8070D774:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(244))) {
        goto loc_8070D790;
    }
}

loc_8070D778:
{
    r0 = MemoryInline::FlatRead32((r29 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8070D780:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D790;
    }
}

loc_8070D784:
{
    r3 = r28;
    r4 = (r0 | 1);
    ctx->lr = 0x8070D790u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80713C80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_8070D790:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8070D794:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D954;
    }
}

loc_8070D798:
{
    r3 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070D7A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D954;
    }
}

loc_8070D7A4:
{
    r0 = MemoryInline::FlatRead16((r29 + 156));
}

loc_8070D7AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(234))) {
        goto loc_8070D7CC;
    }
}

loc_8070D7B0:
{
}

loc_8070D7B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(408))) {
        goto loc_8070D7EC;
    }
}

loc_8070D7B8:
{
}

loc_8070D7BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(378))) {
        goto loc_8070D850;
    }
}

loc_8070D7C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(522));
}

loc_8070D7C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D880;
    }
}

loc_8070D7C8:
{
    goto loc_8070D954;
}

loc_8070D7CC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(822));
}

loc_8070D7D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D7E0;
    }
}

loc_8070D7D4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 176), static_cast<uint8_t>(r0));
    goto loc_8070D954;
}

loc_8070D7E0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 176), static_cast<uint8_t>(r0));
    goto loc_8070D954;
}

loc_8070D7EC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f2.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8070D804:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070D810;
    }
}

loc_8070D808:
{
    f1.d = f0.d;
    goto loc_8070D820;
}

loc_8070D810:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8070D818:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8070D820;
    }
}

loc_8070D81C:
{
    f1.d = f0.d;
}

loc_8070D820:
{
}

loc_8070D824:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8070D82C;
    }
}

loc_8070D828:
{
    // inline leaf 0x8008F610 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    // end of inlined leaf 0x8008F610
}

loc_8070D82C:
{
    r0 = (r30 + -884);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8070D834:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8070D844;
    }
}

loc_8070D838:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 176), static_cast<uint8_t>(r0));
    goto loc_8070D954;
}

loc_8070D844:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 176), static_cast<uint8_t>(r0));
    goto loc_8070D954;
}

loc_8070D850:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(761));
}

loc_8070D854:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D954;
    }
}

loc_8070D858:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    r3 = r28;
    r5 = 0;
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r4 = fctiwzword0;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    ctx->lr = 0x8070D87Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80717C48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8070D954;
}

loc_8070D880:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(776));
}

loc_8070D884:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070D954;
    }
}

loc_8070D888:
{
    r4 = MemoryInline::FlatRead32((r29 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070D894:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D8B8;
    }
}

loc_8070D898:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D8A4;
    }
}

loc_8070D89C:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070D8A8;
}

loc_8070D8A4:
{
    r0 = -1;
}

loc_8070D8A8:
{
}

loc_8070D8AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(775))) {
        goto loc_8070D8B8;
    }
}

loc_8070D8B0:
{
    r3 = (r29 + 128);
    goto loc_8070D938;
}

loc_8070D8B8:
{
    r4 = MemoryInline::FlatRead32((r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070D8C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D8E4;
    }
}

loc_8070D8C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D8D0;
    }
}

loc_8070D8C8:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070D8D4;
}

loc_8070D8D0:
{
    r0 = -1;
}

loc_8070D8D4:
{
}

loc_8070D8D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(775))) {
        goto loc_8070D8E4;
    }
}

loc_8070D8DC:
{
    r3 = (r29 + 132);
    goto loc_8070D938;
}

loc_8070D8E4:
{
    r4 = MemoryInline::FlatRead32((r29 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070D8EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D910;
    }
}

loc_8070D8F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D8FC;
    }
}

loc_8070D8F4:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070D900;
}

loc_8070D8FC:
{
    r0 = -1;
}

loc_8070D900:
{
}

loc_8070D904:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(775))) {
        goto loc_8070D910;
    }
}

loc_8070D908:
{
    r3 = (r29 + 136);
    goto loc_8070D938;
}

loc_8070D910:
{
    r4 = MemoryInline::FlatRead32((r29 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070D918:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D938;
    }
}

loc_8070D91C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D928;
    }
}

loc_8070D920:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070D92C;
}

loc_8070D928:
{
    r0 = -1;
}

loc_8070D92C:
{
}

loc_8070D930:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(775))) {
        goto loc_8070D938;
    }
}

loc_8070D934:
{
    r3 = (r29 + 140);
}

loc_8070D938:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070D93C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D954;
    }
}

loc_8070D940:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070D948:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D954;
    }
}

loc_8070D94C:
{
    r4 = 20;
    ctx->lr = 0x8070D954u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8070D954:
{
    r3 = r28;
}

loc_8070D958:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8070CE00 func_8070CE00 preserves=false fpr_mask=0x80000000
