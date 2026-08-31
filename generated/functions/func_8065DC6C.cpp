#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065DC6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065DC6C;

loc_8065DC6C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r30 = r3;
    r31 = 0;
    r29 = 0x809C0000u;
    r28 = 1;
}

loc_8065DC8C:
{
    r4 = MemoryInline::FlatRead32((r29 + 8408));
    r0 = (r31 & 255);
    r3 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r0 = (r0 * 88);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8065DD1C;
    }
}

loc_8065DCB0:
{
    r0 = MemoryInline::FlatRead8((r4 + 89));
}

loc_8065DCB8:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r0))) {
        goto loc_8065DD1C;
    }
}

loc_8065DCBC:
{
    r27 = 0;
    goto loc_8065DCD8;
}

loc_8065DCC4:
{
    r3 = r30;
    r4 = r27;
    r5 = (r31 & 255);
    ctx->lr = 0x8065DCD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8065E644u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r27 = (r27 + 1);
}

loc_8065DCD8:
{
    r5 = MemoryInline::FlatRead32((r29 + 8408));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 88));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r0));
}

loc_8065DCF0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065DCC4;
    }
}

loc_8065DCF4:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    r4 = r30;
    r3 = (r5 + r3);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r5 = (r5_rot_2 & 2040);
    r0 = MemoryInline::FlatRead32((r3 + 10092));
    r0 = (r0 * 48);
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    ctx->lr = 0x8065DD1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8065A34Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8065DD1C:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(12));
}

loc_8065DD24:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065DC8C;
    }
}

loc_8065DD28:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC001FB gpr_write=0xFFC001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8065DC6C func_8065DC6C preserves=true fpr_mask=0x00000000
