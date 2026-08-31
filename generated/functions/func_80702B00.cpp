#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_80702B00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80702B00;

loc_80702B00:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 128), 0, 50u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 49u, (r3 + 177));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80702B34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702B40;
    }
}

loc_80702B38:
{
    r3 = 0;
    goto loc_80703080;
}

loc_80702B40:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r3 + 156));
}

loc_80702B48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(205))) {
        goto loc_80702B68;
    }
}

loc_80702B4C:
{
}

loc_80702B50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(403))) {
        goto loc_80702C30;
    }
}

loc_80702B54:
{
}

loc_80702B58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(409))) {
        goto loc_80702CF8;
    }
}

loc_80702B5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(406));
}

loc_80702B60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702E9C;
    }
}

loc_80702B64:
{
    goto loc_80702ECC;
}

loc_80702B68:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(572));
}

loc_80702B6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80702ECC;
    }
}

loc_80702B70:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80702B7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702BA0;
    }
}

loc_80702B80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702B8C;
    }
}

loc_80702B84:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80702B90;
}

loc_80702B8C:
{
    r0 = -1;
}

loc_80702B90:
{
}

loc_80702B94:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80702BA0;
    }
}

loc_80702B98:
{
    r5 = (r3 + 128);
    goto loc_80702C20;
}

loc_80702BA0:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80702BA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702BCC;
    }
}

loc_80702BAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702BB8;
    }
}

loc_80702BB0:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80702BBC;
}

loc_80702BB8:
{
    r0 = -1;
}

loc_80702BBC:
{
}

loc_80702BC0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80702BCC;
    }
}

loc_80702BC4:
{
    r5 = (r3 + 132);
    goto loc_80702C20;
}

loc_80702BCC:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80702BD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702BF8;
    }
}

loc_80702BD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702BE4;
    }
}

loc_80702BDC:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80702BE8;
}

loc_80702BE4:
{
    r0 = -1;
}

loc_80702BE8:
{
}

loc_80702BEC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80702BF8;
    }
}

loc_80702BF0:
{
    r5 = (r3 + 136);
    goto loc_80702C20;
}

loc_80702BF8:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80702C00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702C20;
    }
}

loc_80702C04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702C10;
    }
}

loc_80702C08:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80702C14;
}

loc_80702C10:
{
    r0 = -1;
}

loc_80702C14:
{
}

loc_80702C18:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80702C20;
    }
}

loc_80702C1C:
{
    r5 = (r3 + 140);
}

loc_80702C20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80702C24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702ECC;
    }
}

loc_80702C28:
{
    r3 = 0;
    goto loc_80703080;
}

loc_80702C30:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(655));
}

loc_80702C34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80702ECC;
    }
}

loc_80702C38:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80702C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702C68;
    }
}

loc_80702C48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702C54;
    }
}

loc_80702C4C:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80702C58;
}

loc_80702C54:
{
    r0 = -1;
}

loc_80702C58:
{
}

loc_80702C5C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80702C68;
    }
}

loc_80702C60:
{
    r5 = (r3 + 128);
    goto loc_80702CE8;
}

loc_80702C68:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80702C70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702C94;
    }
}

loc_80702C74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702C80;
    }
}

loc_80702C78:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80702C84;
}

loc_80702C80:
{
    r0 = -1;
}

loc_80702C84:
{
}

loc_80702C88:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80702C94;
    }
}

loc_80702C8C:
{
    r5 = (r3 + 132);
    goto loc_80702CE8;
}

loc_80702C94:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80702C9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702CC0;
    }
}

loc_80702CA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702CAC;
    }
}

loc_80702CA4:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80702CB0;
}

loc_80702CAC:
{
    r0 = -1;
}

loc_80702CB0:
{
}

loc_80702CB4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80702CC0;
    }
}

loc_80702CB8:
{
    r5 = (r3 + 136);
    goto loc_80702CE8;
}

loc_80702CC0:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80702CC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702CE8;
    }
}

loc_80702CCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702CD8;
    }
}

loc_80702CD0:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80702CDC;
}

loc_80702CD8:
{
    r0 = -1;
}

loc_80702CDC:
{
}

loc_80702CE0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80702CE8;
    }
}

loc_80702CE4:
{
    r5 = (r3 + 140);
}

loc_80702CE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80702CEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702ECC;
    }
}

loc_80702CF0:
{
    r3 = 0;
    goto loc_80703080;
}

loc_80702CF8:
{
}

loc_80702CFC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(585))) {
        goto loc_80702D0C;
    }
}

loc_80702D00:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(586));
}

loc_80702D04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702DCC;
    }
}

loc_80702D08:
{
    goto loc_80702ECC;
}

loc_80702D0C:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80702D18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702D3C;
    }
}

loc_80702D1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702D28;
    }
}

loc_80702D20:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80702D2C;
}

loc_80702D28:
{
    r0 = -1;
}

loc_80702D2C:
{
}

loc_80702D30:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80702D3C;
    }
}

loc_80702D34:
{
    r5 = (r3 + 128);
    goto loc_80702DBC;
}

loc_80702D3C:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80702D44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702D68;
    }
}

loc_80702D48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702D54;
    }
}

loc_80702D4C:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80702D58;
}

loc_80702D54:
{
    r0 = -1;
}

loc_80702D58:
{
}

loc_80702D5C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80702D68;
    }
}

loc_80702D60:
{
    r5 = (r3 + 132);
    goto loc_80702DBC;
}

loc_80702D68:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80702D70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702D94;
    }
}

loc_80702D74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702D80;
    }
}

loc_80702D78:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80702D84;
}

loc_80702D80:
{
    r0 = -1;
}

loc_80702D84:
{
}

loc_80702D88:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80702D94;
    }
}

loc_80702D8C:
{
    r5 = (r3 + 136);
    goto loc_80702DBC;
}

loc_80702D94:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80702D9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702DBC;
    }
}

loc_80702DA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702DAC;
    }
}

loc_80702DA4:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80702DB0;
}

loc_80702DAC:
{
    r0 = -1;
}

loc_80702DB0:
{
}

loc_80702DB4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80702DBC;
    }
}

loc_80702DB8:
{
    r5 = (r3 + 140);
}

loc_80702DBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80702DC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702ECC;
    }
}

loc_80702DC4:
{
    r3 = 0;
    goto loc_80703080;
}

loc_80702DCC:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80702DD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702DFC;
    }
}

loc_80702DDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702DE8;
    }
}

loc_80702DE0:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_80702DEC;
}

loc_80702DE8:
{
    r0 = -1;
}

loc_80702DEC:
{
}

loc_80702DF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(585))) {
        goto loc_80702DFC;
    }
}

loc_80702DF4:
{
    r4 = (r3 + 128);
    goto loc_80702E7C;
}

loc_80702DFC:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80702E04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702E28;
    }
}

loc_80702E08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702E14;
    }
}

loc_80702E0C:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_80702E18;
}

loc_80702E14:
{
    r0 = -1;
}

loc_80702E18:
{
}

loc_80702E1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(585))) {
        goto loc_80702E28;
    }
}

loc_80702E20:
{
    r4 = (r3 + 132);
    goto loc_80702E7C;
}

loc_80702E28:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80702E30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702E54;
    }
}

loc_80702E34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702E40;
    }
}

loc_80702E38:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_80702E44;
}

loc_80702E40:
{
    r0 = -1;
}

loc_80702E44:
{
}

loc_80702E48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(585))) {
        goto loc_80702E54;
    }
}

loc_80702E4C:
{
    r4 = (r3 + 136);
    goto loc_80702E7C;
}

loc_80702E54:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80702E5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702E7C;
    }
}

loc_80702E60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702E6C;
    }
}

loc_80702E64:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_80702E70;
}

loc_80702E6C:
{
    r0 = -1;
}

loc_80702E70:
{
}

loc_80702E74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(585))) {
        goto loc_80702E7C;
    }
}

loc_80702E78:
{
    r4 = (r3 + 140);
}

loc_80702E7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80702E80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702ECC;
    }
}

loc_80702E84:
{
    r3 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80702E8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702ECC;
    }
}

loc_80702E90:
{
    r4 = 0;
    ctx->lr = 0x80702E98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80702ECC;
}

loc_80702E9C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(556));
}

loc_80702EA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80702ECC;
    }
}

loc_80702EA4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(17));
}

loc_80702EB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80702ECC;
    }
}

loc_80702EB8:
{
    r0 = MemoryInline::FlatRead32((r3 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80702EC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80702ECC;
    }
}

loc_80702EC4:
{
    r3 = 0;
    goto loc_80703080;
}

loc_80702ECC:
{
    r3 = (r30 + 148);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_474A = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_474A[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_474A[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x807028E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80702ED8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80702EE4;
    }
}

loc_80702EDC:
{
    r29 = 0;
    goto loc_80702FE8;
}

loc_80702EE4:
{
    r3 = MemoryInline::FlatRead32((r30 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80702EEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80702EF8;
    }
}

loc_80702EF0:
{
    r29 = (r30 + 128);
    goto loc_80702FC4;
}

loc_80702EF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702F04;
    }
}

loc_80702EFC:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80702F08;
}

loc_80702F04:
{
    r0 = -1;
}

loc_80702F08:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r30 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80702F14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80702F20;
    }
}

loc_80702F18:
{
    r29 = (r30 + 132);
    goto loc_80702FC4;
}

loc_80702F20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702F2C;
    }
}

loc_80702F24:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80702F30;
}

loc_80702F2C:
{
    r0 = -1;
}

loc_80702F30:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r30 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80702F3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80702F48;
    }
}

loc_80702F40:
{
    r29 = (r30 + 136);
    goto loc_80702FC4;
}

loc_80702F48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702F54;
    }
}

loc_80702F4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80702F58;
}

loc_80702F54:
{
    r0 = -1;
}

loc_80702F58:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r30 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80702F64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80702F70;
    }
}

loc_80702F68:
{
    r29 = (r30 + 140);
    goto loc_80702FC4;
}

loc_80702F70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702F7C;
    }
}

loc_80702F74:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80702F80;
}

loc_80702F7C:
{
    r0 = -1;
}

loc_80702F80:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r31;
    r3 = (r30 + 148);
    r5 = (r1 + 8);
    r6 = 4;
    ctx->lr = 0x80702F98u;
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

loc_80702F9C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80702FA8;
    }
}

loc_80702FA0:
{
    r29 = 0;
    goto loc_80702FC4;
}

loc_80702FA8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r29 = (r30 + r0);
    r29 = (r29 + 128);
    r3 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80702FB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702FC4;
    }
}

loc_80702FBC:
{
    r4 = 0;
    ctx->lr = 0x80702FC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80702FC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80702FC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702FE4;
    }
}

loc_80702FCC:
{
    r3 = r30;
    r4 = r29;
    r5 = r31;
    r6 = 0;
    ctx->lr = 0x80702FE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A3E80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80702FE8;
}

loc_80702FE4:
{
    r29 = 0;
}

loc_80702FE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80702FEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070307C;
    }
}

loc_80702FF0:
{
    r0 = MemoryInline::FlatRead16((r30 + 156));
}

loc_80702FF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(419))) {
        goto loc_80703008;
    }
}

loc_80702FFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(427));
}

loc_80703000:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703058;
    }
}

loc_80703004:
{
    goto loc_8070307C;
}

loc_80703008:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(638));
}

loc_8070300C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070307C;
    }
}

loc_80703010:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 5804));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8070301C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80703028;
    }
}

loc_80703020:
{
    f31.d = f0.d;
    goto loc_8070303C;
}

loc_80703028:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 5800));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80703034:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070303C;
    }
}

loc_80703038:
{
    f31.d = f0.d;
}

loc_8070303C:
{
    r3 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703044:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070307C;
    }
}

loc_80703048:
{
    f1.d = f31.d;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_8070307C;
}

loc_80703058:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(590));
}

loc_8070305C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070307C;
    }
}

loc_80703060:
{
    f0.d = PPC_Fctiwz(f31.d);
    r3 = r29;
    r5 = 0;
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r4 = fctiwzword0;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    ctx->lr = 0x8070307Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80717C48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8070307C:
{
    r3 = r29;
}

loc_80703080:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80702B00 func_80702B00 preserves=false fpr_mask=0x80000000
