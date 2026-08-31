#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80205970(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80205970;

loc_80205970:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205988:
{
    r31 = r3;
    r27 = r4;
    r30 = 0;
    r29 = 0;
    r28 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802059A8;
    }
}

loc_802059A0:
{
    r3 = 10;
    goto loc_80205B54;
}

loc_802059A8:
{
    ctx->lr = 0x802059ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F0270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802059B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802059BC;
    }
}

loc_802059B4:
{
    r3 = 11;
    goto loc_80205B54;
}

loc_802059BC:
{
    r3 = r31;
    r4 = r27;
    ctx->lr = 0x802059C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F05F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802059CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802059D4;
    }
}

loc_802059D0:
{
    goto loc_80205B54;
}

loc_802059D4:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802059DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205A0C;
    }
}

loc_802059E0:
{
    r29 = MemoryInline::FlatRead32((r31 + 5584));
    r3 = r31;
    r28 = MemoryInline::FlatRead16((r31 + 6244));
    r30 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6188u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80205A00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020586Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205A04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205A0C;
    }
}

loc_80205A08:
{
    goto loc_80205B54;
}

loc_80205A0C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80205A14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80205A4C;
    }
}

loc_80205A18:
{
    r3 = r31;
    ctx->lr = 0x80205A20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80205758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80205A24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80205A2C;
    }
}

loc_80205A28:
{
    goto loc_80205A50;
}

loc_80205A2C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6244));
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r0 = (r0 & 65528);
    MemoryInline::FlatWrite16((r31 + 6244), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_80205A4C:
{
    r3 = 0;
}

loc_80205A50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205A54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205A5C;
    }
}

loc_80205A58:
{
    goto loc_80205B54;
}

loc_80205A5C:
{
}

loc_80205A60:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_80205A6C;
    }
}

loc_80205A64:
{
    MemoryInline::FlatWrite32((r31 + 5584), r29);
    MemoryInline::FlatWrite16((r31 + 6244), static_cast<uint16_t>(r28));
}

loc_80205A6C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80205A74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205AE4;
    }
}

loc_80205A78:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
}

loc_80205A80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80205AA4;
    }
}

loc_80205A84:
{
    r3 = MemoryInline::FlatRead16((r31 + 6244));
    r0 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80205A8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205AA4;
    }
}

loc_80205A90:
{
    r0 = (r3 | 4);
    r3 = r31;
    MemoryInline::FlatWrite16((r31 + 6244), static_cast<uint16_t>(r0));
    ctx->lr = 0x80205AA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FD340u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80205ADC;
}

loc_80205AA4:
{
    r3 = MemoryInline::FlatRead16((r31 + 6244));
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r3 = (r3 & -5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80205AB4:
{
    MemoryInline::FlatWrite16((r31 + 6244), static_cast<uint16_t>(r3));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205AC4;
    }
}

loc_80205ABC:
{
    r0 = (r3 & 65532);
    MemoryInline::FlatWrite16((r31 + 6244), static_cast<uint16_t>(r0));
}

loc_80205AC4:
{
    r3 = r31;
    r4 = (r1 + 8);
    ctx->lr = 0x80205AD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FC6BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205AD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205ADC;
    }
}

loc_80205AD8:
{
    goto loc_80205B54;
}

loc_80205ADC:
{
    r3 = 0;
    goto loc_80205B54;
}

loc_80205AE4:
{
    r3 = r31;
    ctx->lr = 0x80205AECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FCFA8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205AF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205AF8;
    }
}

loc_80205AF4:
{
    goto loc_80205B54;
}

loc_80205AF8:
{
    r3 = r31;
    ctx->lr = 0x80205B00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F79DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205B04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205B0C;
    }
}

loc_80205B08:
{
    goto loc_80205B54;
}

loc_80205B0C:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
}

loc_80205B14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80205B24;
    }
}

loc_80205B18:
{
    r0 = MemoryInline::FlatRead16((r31 + 6244));
    r0 = (r0 & 65532);
    MemoryInline::FlatWrite16((r31 + 6244), static_cast<uint16_t>(r0));
}

loc_80205B24:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80205B2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80205B50;
    }
}

loc_80205B30:
{
    r0 = MemoryInline::FlatRead16((r31 + 6244));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80205B38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205B50;
    }
}

loc_80205B3C:
{
    r3 = r31;
    ctx->lr = 0x80205B44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FD340u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205B48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205B50;
    }
}

loc_80205B4C:
{
    goto loc_80205B54;
}

loc_80205B50:
{
    r3 = 0;
}

loc_80205B54:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
// RECOMP_REGISTRATION base 0x80205970 func_80205970 preserves=true fpr_mask=0x00000000
