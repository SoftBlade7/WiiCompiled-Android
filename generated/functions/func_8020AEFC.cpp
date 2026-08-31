#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020AEFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020AEFC;

loc_8020AEFC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r13 + -24224));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8020AF20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8020AF3C;
    }
}

loc_8020AF24:
{
    r4 = MemoryInline::FlatRead32((r13 + -24208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8020AF2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020AF3C;
    }
}

loc_8020AF30:
{
    r0 = (r3 * 320);
    r29 = (r4 + r0);
    goto loc_8020AF40;
}

loc_8020AF3C:
{
    r29 = 0;
}

loc_8020AF40:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8020AF44:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8020AF54;
    }
}

loc_8020AF48:
{
    r0 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020AF50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020AF60;
    }
}

loc_8020AF54:
{
    r3 = 65536;
    r3 = (r3 + -20477);
    goto loc_8020B210;
}

loc_8020AF60:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020AF68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020AF78;
    }
}

loc_8020AF6C:
{
    r3 = 65536;
    r3 = (r3 + -20477);
    goto loc_8020B210;
}

loc_8020AF78:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8020AF88;
    }
}

loc_8020AF7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020AF88;
    }
}

loc_8020AF80:
{
    r4 = 0;
    ctx->lr = 0x8020AF88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020C380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8020AF88:
{
    r4 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_8020AF90:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r4))) {
        goto loc_8020AFAC;
    }
}

loc_8020AF94:
{
    r3 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_8020AF9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020AFAC;
    }
}

loc_8020AFA0:
{
    r0 = (r30 * 320);
    r3 = (r3 + r0);
    goto loc_8020AFB0;
}

loc_8020AFAC:
{
    r3 = 0;
}

loc_8020AFB0:
{
}

loc_8020AFB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020AFD0;
    }
}

loc_8020AFB8:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8020AFC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8020AFD0;
    }
}

loc_8020AFC4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8020AFCC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8020AFD8;
    }
}

loc_8020AFD0:
{
    r31 = 0;
    goto loc_8020AFDC;
}

loc_8020AFD8:
{
    r31 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8020AFDC:
{
}

loc_8020AFE0:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r4))) {
        goto loc_8020AFFC;
    }
}

loc_8020AFE4:
{
    r3 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_8020AFEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020AFFC;
    }
}

loc_8020AFF0:
{
    r0 = (r30 * 320);
    r3 = (r3 + r0);
    goto loc_8020B000;
}

loc_8020AFFC:
{
    r3 = 0;
}

loc_8020B000:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B004:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B028;
    }
}

loc_8020B008:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020B010:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B028;
    }
}

loc_8020B014:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B01C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B028;
    }
}

loc_8020B020:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_8020B028:
{
    r0 = MemoryInline::FlatRead8((r29 + 20));
    r4 = 0;
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->lr = 0x8020B038u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80207B18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8020B03C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8020B15C;
    }
}

loc_8020B040:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_8020B048:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r0))) {
        goto loc_8020B064;
    }
}

loc_8020B04C:
{
    r3 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_8020B054:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020B064;
    }
}

loc_8020B058:
{
    r0 = (r30 * 320);
    r3 = (r3 + r0);
    goto loc_8020B068;
}

loc_8020B064:
{
    r3 = 0;
}

loc_8020B068:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B06C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B090;
    }
}

loc_8020B070:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020B078:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B090;
    }
}

loc_8020B07C:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B084:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B090;
    }
}

loc_8020B088:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_8020B090:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x8020B09Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020C630u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8020B0A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8020B100;
    }
}

loc_8020B0A4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_8020B0AC:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r0))) {
        goto loc_8020B0C8;
    }
}

loc_8020B0B0:
{
    r3 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_8020B0B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020B0C8;
    }
}

loc_8020B0BC:
{
    r0 = (r30 * 320);
    r3 = (r3 + r0);
    goto loc_8020B0CC;
}

loc_8020B0C8:
{
    r3 = 0;
}

loc_8020B0CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B0D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B0F8;
    }
}

loc_8020B0D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020B0DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B0F8;
    }
}

loc_8020B0E0:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B0E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B0F8;
    }
}

loc_8020B0EC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
}

loc_8020B0F0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8020B0F8;
    }
}

loc_8020B0F4:
{
    MemoryInline::FlatWrite32((r3 + 12), r31);
}

loc_8020B0F8:
{
    r3 = 0;
    goto loc_8020B210;
}

loc_8020B100:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_8020B108:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r0))) {
        goto loc_8020B124;
    }
}

loc_8020B10C:
{
    r3 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_8020B114:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020B124;
    }
}

loc_8020B118:
{
    r0 = (r30 * 320);
    r3 = (r3 + r0);
    goto loc_8020B128;
}

loc_8020B124:
{
    r3 = 0;
}

loc_8020B128:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B12C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B154;
    }
}

loc_8020B130:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020B138:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B154;
    }
}

loc_8020B13C:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B144:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B154;
    }
}

loc_8020B148:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
}

loc_8020B14C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8020B154;
    }
}

loc_8020B150:
{
    MemoryInline::FlatWrite32((r3 + 12), r31);
}

loc_8020B154:
{
    r3 = 5;
    goto loc_8020B210;
}

loc_8020B15C:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_8020B164:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r0))) {
        goto loc_8020B180;
    }
}

loc_8020B168:
{
    r3 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_8020B170:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020B180;
    }
}

loc_8020B174:
{
    r0 = (r30 * 320);
    r3 = (r3 + r0);
    goto loc_8020B184;
}

loc_8020B180:
{
    r3 = 0;
}

loc_8020B184:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B188:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B1AC;
    }
}

loc_8020B18C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020B194:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B1AC;
    }
}

loc_8020B198:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B1A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B1AC;
    }
}

loc_8020B1A4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_8020B1AC:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x8020B1B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020C630u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_8020B1C0:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r0))) {
        goto loc_8020B1DC;
    }
}

loc_8020B1C4:
{
    r3 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_8020B1CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020B1DC;
    }
}

loc_8020B1D0:
{
    r0 = (r30 * 320);
    r3 = (r3 + r0);
    goto loc_8020B1E0;
}

loc_8020B1DC:
{
    r3 = 0;
}

loc_8020B1E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B1E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B20C;
    }
}

loc_8020B1E8:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020B1F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B20C;
    }
}

loc_8020B1F4:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B1FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B20C;
    }
}

loc_8020B200:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
}

loc_8020B204:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8020B20C;
    }
}

loc_8020B208:
{
    MemoryInline::FlatWrite32((r3 + 12), r31);
}

loc_8020B20C:
{
    ctx->lr = 0x8020B210u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802079F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8020B210:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8020AEFC func_8020AEFC preserves=true fpr_mask=0x00000000
