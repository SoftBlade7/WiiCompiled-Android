#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F4F8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

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

    goto loc_801F4F8C;

loc_801F4F8C:
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
    r27 = r7;
    r29 = r3;
    r30 = r4;
    r31 = r6;
    r7 = (r1 + 8);
    r28 = 1;
    ctx->lr = 0x801F4FBCu;
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
    InvokeDirectCpu<0x801F4A40u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F4FC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4FC8;
    }
}

loc_801F4FC4:
{
    goto loc_801F5208;
}

loc_801F4FC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F4FD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F516C;
    }
}

loc_801F4FD4:
{
    r6 = MemoryInline::FlatRead32(r31);
    r3 = r29;
    r7 = (r1 + 12);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r5 = MemoryInline::FlatRead32((r6 + 24));
    r6 = MemoryInline::FlatRead32((r6 + 20));
    ctx->lr = 0x801F4FF0u;
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
    InvokeDirectCpu<0x801F071Cu>(ctx);
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

loc_801F4FF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F5080;
    }
}

loc_801F4FF8:
{
    r6 = MemoryInline::FlatRead32(r31);
    r5 = 0;
    r0 = -1;
    r4 = MemoryInline::FlatRead16(r6);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    r4 = (r4 & 65532);
    MemoryInline::FlatWrite32((r6 + 16), r5);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r6 + 24), r0);
    MemoryInline::FlatWrite32((r6 + 28), r5);
    r4 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_801F5028:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F5038;
    }
}

loc_801F502C:
{
    r0 = MemoryInline::FlatRead32((r6 + 32));
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_801F5208;
}

loc_801F5038:
{
    r0 = MemoryInline::FlatRead32((r4 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_801F5040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5208;
    }
}

loc_801F5044:
{
    r0 = MemoryInline::FlatRead32((r6 + 32));
    r4 = MemoryInline::FlatRead32((r6 + 36));
    MemoryInline::FlatWrite32((r4 + 32), r0);
    r0 = MemoryInline::FlatRead32((r6 + 36));
    r4 = MemoryInline::FlatRead32((r6 + 32));
    MemoryInline::FlatWrite32((r4 + 36), r0);
    r5 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r6 + 32), r5);
    r4 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead32((r4 + 36));
    MemoryInline::FlatWrite32((r6 + 36), r0);
    MemoryInline::FlatWrite32((r5 + 36), r6);
    r4 = MemoryInline::FlatRead32((r6 + 36));
    MemoryInline::FlatWrite32((r4 + 32), r6);
    goto loc_801F5208;
}

loc_801F5080:
{
    r5 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r5 + 20));
}

loc_801F5090:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_801F5130;
    }
}

loc_801F5094:
{
    r0 = MemoryInline::FlatRead32((r5 + 24));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 + r4);
}

loc_801F50A4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801F5130;
    }
}

loc_801F50A8:
{
    r3 = MemoryInline::FlatRead16(r5);
    r4 = 0;
    r0 = -1;
    MemoryInline::FlatWrite32((r5 + 12), r4);
    r3 = (r3 & 65532);
    MemoryInline::FlatWrite32((r5 + 16), r4);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32((r5 + 24), r0);
    MemoryInline::FlatWrite32((r5 + 28), r4);
    r3 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_801F50D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F50E4;
    }
}

loc_801F50D8:
{
    r0 = MemoryInline::FlatRead32((r5 + 32));
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_801F5128;
}

loc_801F50E4:
{
    r0 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_801F50EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5128;
    }
}

loc_801F50F0:
{
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r3 = MemoryInline::FlatRead32((r5 + 36));
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r0 = MemoryInline::FlatRead32((r5 + 36));
    r3 = MemoryInline::FlatRead32((r5 + 32));
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r4 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r5 + 32), r4);
    r3 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWrite32((r5 + 36), r0);
    MemoryInline::FlatWrite32((r4 + 36), r5);
    r3 = MemoryInline::FlatRead32((r5 + 36));
    MemoryInline::FlatWrite32((r3 + 32), r5);
}

loc_801F5128:
{
    r3 = 17;
    goto loc_801F5208;
}

loc_801F5130:
{
    r3 = MemoryInline::FlatRead16(r5);
    r0 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_801F513C:
{
    r3 = (r3 & -3);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32((r5 + 12), r0);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5160;
    }
}

loc_801F5150:
{
    r0 = MemoryInline::FlatRead32((r29 + 5616));
    r3 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    goto loc_801F5204;
}

loc_801F5160:
{
    r3 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    goto loc_801F5204;
}

loc_801F516C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_801F5170:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5204;
    }
}

loc_801F5174:
{
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F5184:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801F5204;
    }
}

loc_801F5188:
{
    r0 = MemoryInline::FlatRead32((r29 + 5584));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F5190:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5204;
    }
}

loc_801F5194:
{
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r0 = MemoryInline::FlatRead32((r29 + 5616));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801F51A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5204;
    }
}

loc_801F51A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F51A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F51C4;
    }
}

loc_801F51AC:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801F51C4;
    }
}

loc_801F51B0:
{
    r3 = MemoryInline::FlatRead32((r4 + 24));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801F51BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F51C4;
    }
}

loc_801F51C0:
{
    r28 = 1;
}

loc_801F51C4:
{
    r3 = r29;
    ctx->lr = 0x801F51CCu;
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
    InvokeDirectCpu<0x801F4940u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F51D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F51E0;
    }
}

loc_801F51D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F5208;
}

loc_801F51E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801F51E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5204;
    }
}

loc_801F51E8:
{
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x801F51F4u;
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
    InvokeDirectCpu<0x8020C5B4u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F51F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5204;
    }
}

loc_801F51FC:
{
    r3 = 17;
    goto loc_801F5208;
}

loc_801F5204:
{
    r3 = 0;
}

loc_801F5208:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F4F8C func_801F4F8C preserves=true fpr_mask=0x00000000
