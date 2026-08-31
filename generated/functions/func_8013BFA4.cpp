#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013BFA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013BFA4;

loc_8013BFA4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
}

loc_8013BFBC:
{
    r31 = 0x80330000u;
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r31 = (r31 + 25208);
    r30 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8013BFE8;
    }
}

loc_8013BFD8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_8013BFDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013BFE8;
    }
}

loc_8013BFE0:
{
    r3 = 5;
    goto loc_8013C114;
}

loc_8013BFE8:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 1614));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8013BFF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013C004;
    }
}

loc_8013BFFC:
{
    r3 = 12;
    goto loc_8013C114;
}

loc_8013C004:
{
}

loc_8013C008:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8013C010;
    }
}

loc_8013C00C:
{
    r28 = 18;
}

loc_8013C010:
{
}

loc_8013C014:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8013C01C;
    }
}

loc_8013C018:
{
    r29 = 2048;
}

loc_8013C01C:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8013C02C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013C050;
    }
}

loc_8013C030:
{
    r3 = 851968;
    r4 = 0x80280000u;
    r5 = r27;
    r6 = r28;
    r7 = r29;
    r3 = (r3 + 2);
    r4 = (r4 + 15356);
    ctx->lr = 0x8013C050u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131788u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8013C050:
{
}

loc_8013C054:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(1))) {
        goto loc_8013C08C;
    }
}

loc_8013C058:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(18));
}

loc_8013C05C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013C080;
    }
}

loc_8013C060:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(4096));
}

loc_8013C064:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8013C080;
    }
}

loc_8013C068:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(18));
}

loc_8013C06C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013C080;
    }
}

loc_8013C070:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(4096));
}

loc_8013C074:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8013C080;
    }
}

loc_8013C078:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r29));
}

loc_8013C07C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8013C088;
    }
}

loc_8013C080:
{
    r3 = 5;
    goto loc_8013C114;
}

loc_8013C088:
{
    r30 = (r30 | 2);
}

loc_8013C08C:
{
    r0 = MemoryInline::FlatRead16((r31 + 5788));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_8013C094:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013C0A4;
    }
}

loc_8013C098:
{
    r0 = MemoryInline::FlatRead16((r31 + 5790));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
}

loc_8013C0A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C0D4;
    }
}

loc_8013C0A4:
{
    r3 = 2;
    ctx->lr = 0x8013C0ACu;
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

loc_8013C0B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C0CC;
    }
}

loc_8013C0B4:
{
    MemoryInline::FlatWriteRam16((r31 + 5788), static_cast<uint16_t>(r28));
    r4 = r29;
    r5 = r28;
    MemoryInline::FlatWriteRam16((r31 + 5790), static_cast<uint16_t>(r29));
    ctx->lr = 0x8013C0C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801461A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8013C0D4;
}

loc_8013C0CC:
{
    r3 = 3;
    goto loc_8013C114;
}

loc_8013C0D4:
{
    r3 = 2;
    ctx->lr = 0x8013C0DCu;
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

loc_8013C0E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C108;
    }
}

loc_8013C0E4:
{
    r0 = MemoryInline::FlatRead16((r31 + 5784));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C0EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C0F8;
    }
}

loc_8013C0F0:
{
    r0 = (r30 | 1);
    r30 = (r0 & 255);
}

loc_8013C0F8:
{
    MemoryInline::FlatWriteRam16((r31 + 5786), static_cast<uint16_t>(r27));
    r4 = (r30 & 255);
    ctx->lr = 0x8013C104u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80146170u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8013C110;
}

loc_8013C108:
{
    r3 = 3;
    goto loc_8013C114;
}

loc_8013C110:
{
    r3 = 0;
}

loc_8013C114:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8013BFA4 func_8013BFA4 preserves=true fpr_mask=0x00000000
