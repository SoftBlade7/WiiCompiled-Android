#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80673E8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80673E8C;

loc_80673E8C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80673E98:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    r4 = 2;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    MemoryInline::FlatWrite32((r3 + 16900), r6);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80673EC8;
    }
}

loc_80673EC4:
{
    r4 = 3;
}

loc_80673EC8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 16896), r4);
    r4 = 0;
    r5 = 10240;
    MemoryInline::FlatWrite32((r3 + 16908), r0);
    r3 = (r3 + 16912);
    ctx->lr = 0x80673EE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r0 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80673EF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673F2C;
    }
}

loc_80673EF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80673EFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673F34;
    }
}

loc_80673F00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80673F04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673F3C;
    }
}

loc_80673F08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80673F0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673F44;
    }
}

loc_80673F10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80673F14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673F4C;
    }
}

loc_80673F18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80673F1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673F54;
    }
}

loc_80673F20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80673F24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673F5C;
    }
}

loc_80673F28:
{
    goto loc_80673F64;
}

loc_80673F2C:
{
    r5 = 1;
    goto loc_80673F68;
}

loc_80673F34:
{
    r5 = 2;
    goto loc_80673F68;
}

loc_80673F3C:
{
    r5 = 3;
    goto loc_80673F68;
}

loc_80673F44:
{
    r5 = 4;
    goto loc_80673F68;
}

loc_80673F4C:
{
    r5 = 5;
    goto loc_80673F68;
}

loc_80673F54:
{
    r5 = 6;
    goto loc_80673F68;
}

loc_80673F5C:
{
    r5 = 7;
    goto loc_80673F68;
}

loc_80673F64:
{
    r5 = 1;
}

loc_80673F68:
{
    r3 = 0x809C0000u;
    r31 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 8464));
    r6 = 1;
    r3 = MemoryInline::FlatRead32((r31 + 8512));
    r4 = (r4 + 92);
    ctx->lr = 0x80673F84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806773C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 8512));
    r5 = r30;
    r4 = (r29 & 255);
    r6 = (r28 + 16912);
    r7 = (r28 + 16904);
    ctx->lr = 0x80673F9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80677758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80673FA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673FCC;
    }
}

loc_80673FA4:
{
    r5 = 0;
    r4 = 1;
    r0 = 5;
    MemoryInline::FlatWrite32((r28 + 20), r5);
    r3 = 1;
    MemoryInline::FlatWrite32((r28 + 16), r4);
    MemoryInline::FlatWrite32((r28 + 30072), r0);
    MemoryInline::FlatWrite8((r28 + 40), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r28 + 24), r5);
    goto loc_80673FE0;
}

loc_80673FCC:
{
    r3 = r28;
    ctx->lr = 0x80673FD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067552Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 8512));
    ctx->lr = 0x80673FDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067721Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
}

loc_80673FE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80673E8C func_80673E8C preserves=true fpr_mask=0x00000000
