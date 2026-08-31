#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013DDA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013DDA4;

loc_8013DDA4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r6 = 0x80330000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = (r4 * 34);
    r6 = (r6 + 25208);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r3 = (r6 + r0);
    r6 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = (r3 + 1228);
    r3 = r29;
    r4 = r28;
    ctx->lr = 0x8013DDF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013DC44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead8((r28 + 32));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r3));
}

loc_8013DE00:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8013DE34;
    }
}

loc_8013DE04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013DE08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013DE28;
    }
}

loc_8013DE0C:
{
    r4 = MemoryInline::FlatRead16((r28 + 30));
    r0 = MemoryInline::FlatRead16((r1 + 8));
}

loc_8013DE18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8013DE30;
    }
}

loc_8013DE1C:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8013DE24:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8013DE30;
    }
}

loc_8013DE28:
{
    r3 = 13;
    goto loc_8013DFB8;
}

loc_8013DE30:
{
    r31 = 1;
}

loc_8013DE34:
{
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013DE38:
{
    MemoryInline::FlatWrite8((r28 + 33), static_cast<uint8_t>(r31));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013DE54;
    }
}

loc_8013DE40:
{
    r0 = MemoryInline::FlatRead8((r28 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013DE48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013DE54;
    }
}

loc_8013DE4C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 33), static_cast<uint8_t>(r0));
}

loc_8013DE54:
{
    r3 = 2;
    ctx->lr = 0x8013DE5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012ED54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8013DE60:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013DE70;
    }
}

loc_8013DE68:
{
    r3 = 3;
    goto loc_8013DFB8;
}

loc_8013DE70:
{
    r0 = MemoryInline::FlatRead8((r28 + 33));
}

loc_8013DE78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8013DE84;
    }
}

loc_8013DE7C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
}

loc_8013DE84:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8013DE94:
{
    MemoryInline::FlatWriteRam8((r4 + 1380), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam8((r4 + 1381), static_cast<uint8_t>(r29));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013DF40;
    }
}

loc_8013DEA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013DEB4;
    }
}

loc_8013DEA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013DEA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013DEC0;
    }
}

loc_8013DEAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013DF20;
    }
}

loc_8013DEB0:
{
    goto loc_8013DF88;
}

loc_8013DEB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8013DEB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013DF88;
    }
}

loc_8013DEBC:
{
    goto loc_8013DF68;
}

loc_8013DEC0:
{
    r0 = MemoryInline::FlatRead8((r28 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8013DEC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013DEF4;
    }
}

loc_8013DECC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013DF0C;
    }
}

loc_8013DED0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8013DED4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013DEDC;
    }
}

loc_8013DED8:
{
    goto loc_8013DF0C;
}

loc_8013DEDC:
{
    r0 = (r30 * 284);
    r3 = r31;
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 52));
    ctx->lr = 0x8013DEF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014579Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8013DF98;
}

loc_8013DEF4:
{
    r0 = (r30 * 284);
    r3 = r31;
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 52));
    ctx->lr = 0x8013DF08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801458D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8013DF98;
}

loc_8013DF0C:
{
    r3 = 0x80330000u;
    r0 = 4;
    r3 = (r3 + 25208);
    MemoryInline::FlatWriteRam8((r3 + 1380), static_cast<uint8_t>(r0));
    goto loc_8013DF98;
}

loc_8013DF20:
{
    r0 = (r30 * 284);
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r6 = MemoryInline::FlatRead16((r1 + 10));
    r3 = r31;
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 52));
    ctx->lr = 0x8013DF3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014561Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8013DF98;
}

loc_8013DF40:
{
    r0 = (r30 * 284);
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r6 = MemoryInline::FlatRead16((r1 + 10));
    r3 = r31;
    r7 = MemoryInline::FlatRead16((r1 + 12));
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 52));
    r8 = MemoryInline::FlatRead16((r1 + 14));
    ctx->lr = 0x8013DF64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801456D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8013DF98;
}

loc_8013DF68:
{
    r0 = (r30 * 284);
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r6 = MemoryInline::FlatRead16((r1 + 10));
    r3 = r31;
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 52));
    ctx->lr = 0x8013DF84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80145820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8013DF98;
}

loc_8013DF88:
{
    r3 = 0x80330000u;
    r0 = 4;
    r3 = (r3 + 25208);
    MemoryInline::FlatWriteRam8((r3 + 1380), static_cast<uint8_t>(r0));
}

loc_8013DF98:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 1380));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8013DFA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013DFB4;
    }
}

loc_8013DFAC:
{
    r3 = r31;
    ctx->lr = 0x8013DFB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8013DFB4:
{
    r3 = 1;
}

loc_8013DFB8:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFC001BFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8013DDA4 func_8013DDA4 preserves=true fpr_mask=0x00000000
