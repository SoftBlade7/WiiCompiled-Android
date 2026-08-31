#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004EE30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004EE30;

loc_8004EE30:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 48));
}

loc_8004EE5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004EE68;
    }
}

loc_8004EE60:
{
    r3 = (r4 + r0);
    goto loc_8004EE6C;
}

loc_8004EE68:
{
    r3 = 0;
}

loc_8004EE6C:
{
}

loc_8004EE70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004EE7C;
    }
}

loc_8004EE74:
{
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004EE80;
}

loc_8004EE7C:
{
    r29 = 0;
}

loc_8004EE80:
{
}

loc_8004EE84:
{
    r28 = 0;
    r30 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8004EEF8;
    }
}

loc_8004EE90:
{
    goto loc_8004EEF0;
}

loc_8004EE94:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_8004EEA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004EEAC;
    }
}

loc_8004EEA4:
{
    r0 = (r3 + r0);
    goto loc_8004EEB0;
}

loc_8004EEAC:
{
    r0 = 0;
}

loc_8004EEB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004EEB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004EED8;
    }
}

loc_8004EEB8:
{
    r3 = (r0 + r30);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004EEC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004EED0;
    }
}

loc_8004EEC8:
{
    r0 = (r0 + r3);
    goto loc_8004EEDC;
}

loc_8004EED0:
{
    r0 = 0;
    goto loc_8004EEDC;
}

loc_8004EED8:
{
    r0 = 0;
}

loc_8004EEDC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = (r1 + 36);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052190u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r28 = (r28 + 1);
    r30 = (r30 + 16);
}

loc_8004EEF0:
{
}

loc_8004EEF4:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r29))) {
        goto loc_8004EE94;
    }
}

loc_8004EEF8:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_8004EF04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004EF10;
    }
}

loc_8004EF08:
{
    r3 = (r3 + r0);
    goto loc_8004EF14;
}

loc_8004EF10:
{
    r3 = 0;
}

loc_8004EF14:
{
}

loc_8004EF18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004EF24;
    }
}

loc_8004EF1C:
{
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004EF28;
}

loc_8004EF24:
{
    r29 = 0;
}

loc_8004EF28:
{
}

loc_8004EF2C:
{
    r28 = 0;
    r30 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8004EFA0;
    }
}

loc_8004EF38:
{
    goto loc_8004EF98;
}

loc_8004EF3C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_8004EF48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004EF54;
    }
}

loc_8004EF4C:
{
    r0 = (r3 + r0);
    goto loc_8004EF58;
}

loc_8004EF54:
{
    r0 = 0;
}

loc_8004EF58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004EF5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004EF80;
    }
}

loc_8004EF60:
{
    r3 = (r0 + r30);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004EF6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004EF78;
    }
}

loc_8004EF70:
{
    r0 = (r0 + r3);
    goto loc_8004EF84;
}

loc_8004EF78:
{
    r0 = 0;
    goto loc_8004EF84;
}

loc_8004EF80:
{
    r0 = 0;
}

loc_8004EF84:
{
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = (r1 + 32);
    ctx->lr = 0x8004EF90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004F550u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r28 = (r28 + 1);
    r30 = (r30 + 16);
}

loc_8004EF98:
{
}

loc_8004EF9C:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r29))) {
        goto loc_8004EF3C;
    }
}

loc_8004EFA0:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_8004EFAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004EFB8;
    }
}

loc_8004EFB0:
{
    r3 = (r3 + r0);
    goto loc_8004EFBC;
}

loc_8004EFB8:
{
    r3 = 0;
}

loc_8004EFBC:
{
}

loc_8004EFC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004EFCC;
    }
}

loc_8004EFC4:
{
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004EFD0;
}

loc_8004EFCC:
{
    r29 = 0;
}

loc_8004EFD0:
{
}

loc_8004EFD4:
{
    r28 = 0;
    r30 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8004F04C;
    }
}

loc_8004EFE0:
{
    goto loc_8004F044;
}

loc_8004EFE4:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_8004EFF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004EFFC;
    }
}

loc_8004EFF4:
{
    r0 = (r3 + r0);
    goto loc_8004F000;
}

loc_8004EFFC:
{
    r0 = 0;
}

loc_8004F000:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F004:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F028;
    }
}

loc_8004F008:
{
    r3 = (r0 + r30);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004F014:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F020;
    }
}

loc_8004F018:
{
    r0 = (r0 + r3);
    goto loc_8004F02C;
}

loc_8004F020:
{
    r0 = 0;
    goto loc_8004F02C;
}

loc_8004F028:
{
    r0 = 0;
}

loc_8004F02C:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = (r1 + 28);
    r4 = 0;
    ctx->lr = 0x8004F03Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
    r30 = (r30 + 16);
}

loc_8004F044:
{
}

loc_8004F048:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r29))) {
        goto loc_8004EFE4;
    }
}

loc_8004F04C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_8004F058:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F064;
    }
}

loc_8004F05C:
{
    r3 = (r3 + r0);
    goto loc_8004F068;
}

loc_8004F064:
{
    r3 = 0;
}

loc_8004F068:
{
}

loc_8004F06C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004F078;
    }
}

loc_8004F070:
{
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004F07C;
}

loc_8004F078:
{
    r29 = 0;
}

loc_8004F07C:
{
}

loc_8004F080:
{
    r28 = 0;
    r30 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8004F0F8;
    }
}

loc_8004F08C:
{
    goto loc_8004F0F0;
}

loc_8004F090:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_8004F09C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F0A8;
    }
}

loc_8004F0A0:
{
    r0 = (r3 + r0);
    goto loc_8004F0AC;
}

loc_8004F0A8:
{
    r0 = 0;
}

loc_8004F0AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F0B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F0D4;
    }
}

loc_8004F0B4:
{
    r3 = (r0 + r30);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004F0C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F0CC;
    }
}

loc_8004F0C4:
{
    r0 = (r0 + r3);
    goto loc_8004F0D8;
}

loc_8004F0CC:
{
    r0 = 0;
    goto loc_8004F0D8;
}

loc_8004F0D4:
{
    r0 = 0;
}

loc_8004F0D8:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = (r1 + 24);
    r4 = 0;
    ctx->lr = 0x8004F0E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052840u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
    r30 = (r30 + 16);
}

loc_8004F0F0:
{
}

loc_8004F0F4:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r29))) {
        goto loc_8004F090;
    }
}

loc_8004F0F8:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_8004F104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F110;
    }
}

loc_8004F108:
{
    r3 = (r3 + r0);
    goto loc_8004F114;
}

loc_8004F110:
{
    r3 = 0;
}

loc_8004F114:
{
}

loc_8004F118:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004F124;
    }
}

loc_8004F11C:
{
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004F128;
}

loc_8004F124:
{
    r29 = 0;
}

loc_8004F128:
{
}

loc_8004F12C:
{
    r28 = 0;
    r30 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8004F1A4;
    }
}

loc_8004F138:
{
    goto loc_8004F19C;
}

loc_8004F13C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_8004F148:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F154;
    }
}

loc_8004F14C:
{
    r0 = (r3 + r0);
    goto loc_8004F158;
}

loc_8004F154:
{
    r0 = 0;
}

loc_8004F158:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F15C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F180;
    }
}

loc_8004F160:
{
    r3 = (r0 + r30);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004F16C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F178;
    }
}

loc_8004F170:
{
    r0 = (r0 + r3);
    goto loc_8004F184;
}

loc_8004F178:
{
    r0 = 0;
    goto loc_8004F184;
}

loc_8004F180:
{
    r0 = 0;
}

loc_8004F184:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r1 + 20);
    r4 = 0;
    ctx->lr = 0x8004F194u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
    r30 = (r30 + 16);
}

loc_8004F19C:
{
}

loc_8004F1A0:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r29))) {
        goto loc_8004F13C;
    }
}

loc_8004F1A4:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 36));
}

loc_8004F1B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F1BC;
    }
}

loc_8004F1B4:
{
    r3 = (r3 + r0);
    goto loc_8004F1C0;
}

loc_8004F1BC:
{
    r3 = 0;
}

loc_8004F1C0:
{
}

loc_8004F1C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004F1D0;
    }
}

loc_8004F1C8:
{
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004F1D4;
}

loc_8004F1D0:
{
    r29 = 0;
}

loc_8004F1D4:
{
}

loc_8004F1D8:
{
    r28 = 0;
    r30 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8004F250;
    }
}

loc_8004F1E4:
{
    goto loc_8004F248;
}

loc_8004F1E8:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 36));
}

loc_8004F1F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F200;
    }
}

loc_8004F1F8:
{
    r0 = (r3 + r0);
    goto loc_8004F204;
}

loc_8004F200:
{
    r0 = 0;
}

loc_8004F204:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F208:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F22C;
    }
}

loc_8004F20C:
{
    r3 = (r0 + r30);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004F218:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F224;
    }
}

loc_8004F21C:
{
    r0 = (r0 + r3);
    goto loc_8004F230;
}

loc_8004F224:
{
    r0 = 0;
    goto loc_8004F230;
}

loc_8004F22C:
{
    r0 = 0;
}

loc_8004F230:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 16);
    r4 = 0;
    ctx->lr = 0x8004F240u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052880u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
    r30 = (r30 + 16);
}

loc_8004F248:
{
}

loc_8004F24C:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r29))) {
        goto loc_8004F1E8;
    }
}

loc_8004F250:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_8004F25C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F268;
    }
}

loc_8004F260:
{
    r3 = (r3 + r0);
    goto loc_8004F26C;
}

loc_8004F268:
{
    r3 = 0;
}

loc_8004F26C:
{
}

loc_8004F270:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004F27C;
    }
}

loc_8004F274:
{
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004F280;
}

loc_8004F27C:
{
    r29 = 0;
}

loc_8004F280:
{
}

loc_8004F284:
{
    r28 = 0;
    r30 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8004F2FC;
    }
}

loc_8004F290:
{
    goto loc_8004F2F4;
}

loc_8004F294:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_8004F2A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F2AC;
    }
}

loc_8004F2A4:
{
    r0 = (r3 + r0);
    goto loc_8004F2B0;
}

loc_8004F2AC:
{
    r0 = 0;
}

loc_8004F2B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F2B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F2D8;
    }
}

loc_8004F2B8:
{
    r3 = (r0 + r30);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004F2C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F2D0;
    }
}

loc_8004F2C8:
{
    r0 = (r0 + r3);
    goto loc_8004F2DC;
}

loc_8004F2D0:
{
    r0 = 0;
    goto loc_8004F2DC;
}

loc_8004F2D8:
{
    r0 = 0;
}

loc_8004F2DC:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x8004F2ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800528A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
    r30 = (r30 + 16);
}

loc_8004F2F4:
{
}

loc_8004F2F8:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r29))) {
        goto loc_8004F294;
    }
}

loc_8004F2FC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8004F308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F314;
    }
}

loc_8004F30C:
{
    r3 = (r3 + r0);
    goto loc_8004F318;
}

loc_8004F314:
{
    r3 = 0;
}

loc_8004F318:
{
}

loc_8004F31C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004F328;
    }
}

loc_8004F320:
{
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004F32C;
}

loc_8004F328:
{
    r29 = 0;
}

loc_8004F32C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8004F330:
{
    r28 = 0;
    r30 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F3A8;
    }
}

loc_8004F33C:
{
    goto loc_8004F3A0;
}

loc_8004F340:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8004F34C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F358;
    }
}

loc_8004F350:
{
    r0 = (r3 + r0);
    goto loc_8004F35C;
}

loc_8004F358:
{
    r0 = 0;
}

loc_8004F35C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F360:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F384;
    }
}

loc_8004F364:
{
    r3 = (r0 + r30);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004F370:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F37C;
    }
}

loc_8004F374:
{
    r0 = (r0 + r3);
    goto loc_8004F388;
}

loc_8004F37C:
{
    r0 = 0;
    goto loc_8004F388;
}

loc_8004F384:
{
    r0 = 0;
}

loc_8004F388:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x8004F398u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800528C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
    r30 = (r30 + 16);
}

loc_8004F3A0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r29));
}

loc_8004F3A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004F340;
    }
}

loc_8004F3A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8004EE30 func_8004EE30 preserves=true fpr_mask=0x00000000
