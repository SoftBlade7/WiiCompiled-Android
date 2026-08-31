#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F4D88(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_801F4D88;

loc_801F4D88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r7;
    r7 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r6;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    ctx->lr = 0x801F4DBCu;
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
    InvokeDirectCpu<0x801F4A40u>(ctx);
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

loc_801F4DC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4DC8;
    }
}

loc_801F4DC4:
{
    goto loc_801F4F6C;
}

loc_801F4DC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F4DD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F4F68;
    }
}

loc_801F4DD4:
{
    r6 = MemoryInline::FlatRead32(r29);
    r3 = r28;
    r7 = (r1 + 12);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r5 = MemoryInline::FlatRead32((r6 + 24));
    r6 = MemoryInline::FlatRead32((r6 + 20));
    ctx->lr = 0x801F4DF0u;
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
    InvokeDirectCpu<0x801F071Cu>(ctx);
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
}

loc_801F4DF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F4E80;
    }
}

loc_801F4DF8:
{
    r6 = MemoryInline::FlatRead32(r29);
    r5 = 0;
    r0 = -1;
    r4 = MemoryInline::FlatRead16(r6);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    r4 = (r4 & 65532);
    MemoryInline::FlatWrite32((r6 + 16), r5);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r6 + 24), r0);
    MemoryInline::FlatWrite32((r6 + 28), r5);
    r4 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_801F4E28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F4E38;
    }
}

loc_801F4E2C:
{
    r0 = MemoryInline::FlatRead32((r6 + 32));
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F4F6C;
}

loc_801F4E38:
{
    r0 = MemoryInline::FlatRead32((r4 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_801F4E40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4F6C;
    }
}

loc_801F4E44:
{
    r0 = MemoryInline::FlatRead32((r6 + 32));
    r4 = MemoryInline::FlatRead32((r6 + 36));
    MemoryInline::FlatWrite32((r4 + 32), r0);
    r0 = MemoryInline::FlatRead32((r6 + 36));
    r4 = MemoryInline::FlatRead32((r6 + 32));
    MemoryInline::FlatWrite32((r4 + 36), r0);
    r5 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r6 + 32), r5);
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r4 + 36));
    MemoryInline::FlatWrite32((r6 + 36), r0);
    MemoryInline::FlatWrite32((r5 + 36), r6);
    r4 = MemoryInline::FlatRead32((r6 + 36));
    MemoryInline::FlatWrite32((r4 + 32), r6);
    goto loc_801F4F6C;
}

loc_801F4E80:
{
    r5 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r5 + 20));
}

loc_801F4E90:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_801F4F30;
    }
}

loc_801F4E94:
{
    r0 = MemoryInline::FlatRead32((r5 + 24));
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = (r0 + r4);
}

loc_801F4EA4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801F4F30;
    }
}

loc_801F4EA8:
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
    r3 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_801F4ED4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F4EE4;
    }
}

loc_801F4ED8:
{
    r0 = MemoryInline::FlatRead32((r5 + 32));
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F4F28;
}

loc_801F4EE4:
{
    r0 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_801F4EEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4F28;
    }
}

loc_801F4EF0:
{
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r3 = MemoryInline::FlatRead32((r5 + 36));
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r0 = MemoryInline::FlatRead32((r5 + 36));
    r3 = MemoryInline::FlatRead32((r5 + 32));
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r4 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r5 + 32), r4);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWrite32((r5 + 36), r0);
    MemoryInline::FlatWrite32((r4 + 36), r5);
    r3 = MemoryInline::FlatRead32((r5 + 36));
    MemoryInline::FlatWrite32((r3 + 32), r5);
}

loc_801F4F28:
{
    r3 = 17;
    goto loc_801F4F6C;
}

loc_801F4F30:
{
    r3 = MemoryInline::FlatRead16(r5);
    r0 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801F4F3C:
{
    r3 = (r3 & -3);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32((r5 + 12), r0);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4F60;
    }
}

loc_801F4F50:
{
    r0 = MemoryInline::FlatRead32((r28 + 5616));
    r3 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    goto loc_801F4F68;
}

loc_801F4F60:
{
    r3 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWrite32((r3 + 28), r0);
}

loc_801F4F68:
{
    r3 = 0;
}

loc_801F4F6C:
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
// RECOMP_REGISTRATION base 0x801F4D88 func_801F4D88 preserves=true fpr_mask=0x00000000
