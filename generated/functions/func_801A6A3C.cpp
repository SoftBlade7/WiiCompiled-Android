#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A6A3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A6A3C;

loc_801A6A3C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = -872415232;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r31 = MemoryInline::FlatRead32((r3 + 12288));
    r0 = MemoryInline::FlatRead32((r3 + 12292));
    r31 = (r31 & -65537);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801A6A68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6A74;
    }
}

loc_801A6A6C:
{
    r0 = (r31 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A6A7C;
    }
}

loc_801A6A74:
{
    r3 = r30;
    ctx->lr = 0x801A6A7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A1F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801A6A7C:
{
    r0 = (r31 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A6A80:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6ACC;
    }
}

loc_801A6A88:
{
    r3 = -872415232;
    r4 = MemoryInline::FlatRead16((r3 + 16414));
    r3 = (r4 & 1);
}

loc_801A6A94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6A9C;
    }
}

loc_801A6A98:
{
    r0 = (r0 | -2147483648);
}

loc_801A6A9C:
{
    r3 = (r4 & 2);
}

loc_801A6AA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6AA8;
    }
}

loc_801A6AA4:
{
    r0 = (r0 | 1073741824);
}

loc_801A6AA8:
{
    r3 = (r4 & 4);
}

loc_801A6AAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6AB4;
    }
}

loc_801A6AB0:
{
    r0 = (r0 | 536870912);
}

loc_801A6AB4:
{
    r3 = (r4 & 8);
}

loc_801A6AB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6AC0;
    }
}

loc_801A6ABC:
{
    r0 = (r0 | 268435456);
}

loc_801A6AC0:
{
    r3 = (r4 & 16);
}

loc_801A6AC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6ACC;
    }
}

loc_801A6AC8:
{
    r0 = (r0 | 134217728);
}

loc_801A6ACC:
{
    r3 = (r31 & 64);
}

loc_801A6AD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6B00;
    }
}

loc_801A6AD4:
{
    r3 = -872415232;
    r4 = MemoryInline::FlatRead16((r3 + 20490));
    r3 = (r4 & 8);
}

loc_801A6AE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6AE8;
    }
}

loc_801A6AE4:
{
    r0 = (r0 | 67108864);
}

loc_801A6AE8:
{
    r3 = (r4 & 32);
}

loc_801A6AEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6AF4;
    }
}

loc_801A6AF0:
{
    r0 = (r0 | 33554432);
}

loc_801A6AF4:
{
    r3 = (r4 & 128);
}

loc_801A6AF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6B00;
    }
}

loc_801A6AFC:
{
    r0 = (r0 | 16777216);
}

loc_801A6B00:
{
    r3 = (r31 & 32);
}

loc_801A6B04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6B1C;
    }
}

loc_801A6B08:
{
    r3 = -855638016;
    r3 = MemoryInline::FlatRead32((r3 + 27648));
    r3 = (r3 & 8);
}

loc_801A6B14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6B1C;
    }
}

loc_801A6B18:
{
    r0 = (r0 | 8388608);
}

loc_801A6B1C:
{
    r3 = (r31 & 16);
}

loc_801A6B20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6B9C;
    }
}

loc_801A6B24:
{
    r3 = -855638016;
    r4 = MemoryInline::FlatRead32((r3 + 26624));
    r3 = (r4 & 2);
}

loc_801A6B30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6B38;
    }
}

loc_801A6B34:
{
    r0 = (r0 | 4194304);
}

loc_801A6B38:
{
    r3 = (r4 & 8);
}

loc_801A6B3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6B44;
    }
}

loc_801A6B40:
{
    r0 = (r0 | 2097152);
}

loc_801A6B44:
{
    r3 = (r4 & 2048);
}

loc_801A6B48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6B50;
    }
}

loc_801A6B4C:
{
    r0 = (r0 | 1048576);
}

loc_801A6B50:
{
    r3 = -855638016;
    r4 = MemoryInline::FlatRead32((r3 + 26644));
    r3 = (r4 & 2);
}

loc_801A6B5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6B64;
    }
}

loc_801A6B60:
{
    r0 = (r0 | 524288);
}

loc_801A6B64:
{
    r3 = (r4 & 8);
}

loc_801A6B68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6B70;
    }
}

loc_801A6B6C:
{
    r0 = (r0 | 262144);
}

loc_801A6B70:
{
    r3 = (r4 & 2048);
}

loc_801A6B74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6B7C;
    }
}

loc_801A6B78:
{
    r0 = (r0 | 131072);
}

loc_801A6B7C:
{
    r3 = -855638016;
    r4 = MemoryInline::FlatRead32((r3 + 26664));
    r3 = (r4 & 2);
}

loc_801A6B88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6B90;
    }
}

loc_801A6B8C:
{
    r0 = (r0 | 65536);
}

loc_801A6B90:
{
    r3 = (r4 & 8);
}

loc_801A6B94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6B9C;
    }
}

loc_801A6B98:
{
    r0 = (r0 | 32768);
}

loc_801A6B9C:
{
    r3 = (r31 & 8192);
}

loc_801A6BA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6BA8;
    }
}

loc_801A6BA4:
{
    r0 = (r0 | 32);
}

loc_801A6BA8:
{
    r3 = (r31 & 4096);
}

loc_801A6BAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6BB4;
    }
}

loc_801A6BB0:
{
    r0 = (r0 | 64);
}

loc_801A6BB4:
{
    r3 = (r31 & 1024);
}

loc_801A6BB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6BC0;
    }
}

loc_801A6BBC:
{
    r0 = (r0 | 4096);
}

loc_801A6BC0:
{
    r3 = (r31 & 512);
}

loc_801A6BC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6BCC;
    }
}

loc_801A6BC8:
{
    r0 = (r0 | 8192);
}

loc_801A6BCC:
{
    r3 = (r31 & 256);
}

loc_801A6BD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6BD8;
    }
}

loc_801A6BD4:
{
    r0 = (r0 | 128);
}

loc_801A6BD8:
{
    r3 = (r31 & 8);
}

loc_801A6BDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6BE4;
    }
}

loc_801A6BE0:
{
    r0 = (r0 | 2048);
}

loc_801A6BE4:
{
    r3 = (r31 & 4);
}

loc_801A6BE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6BF0;
    }
}

loc_801A6BEC:
{
    r0 = (r0 | 1024);
}

loc_801A6BF0:
{
    r3 = (r31 & 2);
}

loc_801A6BF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6BFC;
    }
}

loc_801A6BF8:
{
    r0 = (r0 | 512);
}

loc_801A6BFC:
{
    r3 = (r31 & 2048);
}

loc_801A6C00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6C08;
    }
}

loc_801A6C04:
{
    r0 = (r0 | 16384);
}

loc_801A6C08:
{
    r3 = (r31 & 1);
}

loc_801A6C0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6C14;
    }
}

loc_801A6C10:
{
    r0 = (r0 | 256);
}

loc_801A6C14:
{
    r3 = (r31 & 16384);
}

loc_801A6C18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6C20;
    }
}

loc_801A6C1C:
{
    r0 = (r0 | 16);
}

loc_801A6C20:
{
    r3 = 0x80000000u;
    r4 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 200));
    r3 = (r4 | r3);
    r3 = (r0 & ~r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6CBC;
    }
}

loc_801A6C38:
{
    r4 = 0x80290000u;
    r4 = (r4 + 1536);
}

loc_801A6C40:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A6C58;
    }
}

loc_801A6C4C:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_801A6C60;
}

loc_801A6C58:
{
    r4 = (r4 + 4);
    goto loc_801A6C40;
}

loc_801A6C60:
{
    r3 = MemoryInline::FlatRead32((r13 + -25352));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r31 = MemoryInline::FlatRead32(r3_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801A6C70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6CBC;
    }
}

loc_801A6C74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(4));
}

loc_801A6C78:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A6C94;
    }
}

loc_801A6C7C:
{
    MemoryInline::FlatWrite16((r13 + -25364), static_cast<uint16_t>(r29));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r13 + -25356), r4);
    MemoryInline::FlatWrite32((r13 + -25360), r3);
    r0 = MemoryInline::FlatRead32((r30 + 408));
    MemoryInline::FlatWrite32((r13 + -25368), r0);
}

loc_801A6C94:
{
    ctx->lr = 0x801A6C98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A98E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r12 = r31;
    r3 = r29;
    r4 = r30;
    ctr = r12;
    ctx->lr = 0x801A6CACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x801A6CB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A9924u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctx->lr = 0x801A6CB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A9E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    ctx->lr = 0x801A6CBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A1F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801A6CBC:
{
    r3 = r30;
    ctx->lr = 0x801A6CC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A1F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A6A3C func_801A6A3C preserves=true fpr_mask=0x00000000
