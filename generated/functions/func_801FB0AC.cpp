#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FB0AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;

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

    goto loc_801FB0AC;

loc_801FB0AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r6;
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801FB0E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB128;
    }
}

loc_801FB0EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FB0FC;
    }
}

loc_801FB0F0:
{
}

loc_801FB0F4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801FB108;
    }
}

loc_801FB0F8:
{
    goto loc_801FB168;
}

loc_801FB0FC:
{
}

loc_801FB100:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_801FB168;
    }
}

loc_801FB104:
{
    goto loc_801FB144;
}

loc_801FB108:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(4095));
}

loc_801FB10C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FB118;
    }
}

loc_801FB110:
{
    r3 = 16;
    goto loc_801FB16C;
}

loc_801FB118:
{
    r4 = (r4 & 65535);
    r5 = (r6 & 65535);
    ctx->lr = 0x801FB124u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FDC1Cu>(ctx);
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
    goto loc_801FB16C;
}

loc_801FB128:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(65535));
}

loc_801FB12C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FB138;
    }
}

loc_801FB130:
{
    r3 = 16;
    goto loc_801FB16C;
}

loc_801FB138:
{
    r5 = r28;
    ctx->lr = 0x801FB140u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FE5B8u>(ctx);
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
    goto loc_801FB16C;
}

loc_801FB144:
{
    r5 = 268435456;
    r0 = (r5 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_801FB150:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FB15C;
    }
}

loc_801FB154:
{
    r3 = 16;
    goto loc_801FB16C;
}

loc_801FB15C:
{
    r5 = r28;
    ctx->lr = 0x801FB164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FEB64u>(ctx);
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
    goto loc_801FB16C;
}

loc_801FB168:
{
    r3 = 15;
}

loc_801FB16C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FB170:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB178;
    }
}

loc_801FB174:
{
    goto loc_801FB2B0;
}

loc_801FB178:
{
    r5 = MemoryInline::FlatRead32((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801FB180:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB2AC;
    }
}

loc_801FB184:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FB18C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB2AC;
    }
}

loc_801FB190:
{
}

loc_801FB194:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_801FB1FC;
    }
}

loc_801FB198:
{
    r3 = MemoryInline::FlatRead16((r29 + 28));
    r0 = MemoryInline::FlatRead32((r29 + 36));
    r4 = (r3 + 1);
    r3 = PPC_Divwu(static_cast<uint32_t>(r31), static_cast<uint32_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_801FB1AC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FB2AC;
    }
}

loc_801FB1B0:
{
    r0 = (r3 * r4);
    r0 = (r31 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801FB1C8;
    }
}

loc_801FB1BC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0;
    r5_addr_1 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_1, r3);
}

loc_801FB1C8:
{
    r0 = MemoryInline::FlatRead32((r29 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_801FB1D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FB2AC;
    }
}

loc_801FB1D4:
{
    r3 = MemoryInline::FlatRead16((r29 + 28));
    r4 = (r31 + -1);
    MemoryInline::FlatWrite32((r29 + 40), r4);
    r0 = (r3 + 1);
    r3 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r3 * r0);
    MemoryInline::FlatWrite32((r29 + 32), r3);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite16((r29 + 30), static_cast<uint16_t>(r0));
    goto loc_801FB2AC;
}

loc_801FB1FC:
{
    r3 = MemoryInline::FlatRead32((r29 + 48));
    r4 = 0x80250000u;
    r4 = (r4 + 12640);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_801FB21C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB2AC;
    }
}

loc_801FB220:
{
    r3 = r29;
    r4 = r31;
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x801FB234u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FAB78u>(ctx);
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

loc_801FB238:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB240;
    }
}

loc_801FB23C:
{
    goto loc_801FB2B0;
}

loc_801FB240:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FB248:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FB2AC;
    }
}

loc_801FB24C:
{
    r4 = MemoryInline::FlatRead32((r29 + 32));
    r0 = MemoryInline::FlatRead32((r29 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801FB258:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FB2AC;
    }
}

loc_801FB25C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FB260:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB2AC;
    }
}

loc_801FB264:
{
    r3 = MemoryInline::FlatRead16((r29 + 28));
    r0 = (r3 + 1);
    r0 = (r4 * r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_801FB274:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FB29C;
    }
}

loc_801FB278:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 24));
    MemoryInline::FlatWrite16((r29 + 30), static_cast<uint16_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_1, r30);
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 32), r0);
    goto loc_801FB2A8;
}

loc_801FB29C:
{
    r3 = MemoryInline::FlatRead16((r29 + 30));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 30), static_cast<uint16_t>(r0));
}

loc_801FB2A8:
{
    MemoryInline::FlatWrite32((r29 + 40), r31);
}

loc_801FB2AC:
{
    r3 = 0;
}

loc_801FB2B0:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FB0AC func_801FB0AC preserves=true fpr_mask=0x00000000
