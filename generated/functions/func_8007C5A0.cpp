#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007C5A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8007C5A0;

loc_8007C5A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r8 = MemoryInline::FlatRead32((r3 + 216));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_8007C5C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8007C5D4;
    }
}

loc_8007C5CC:
{
    r3 = 0;
    goto loc_8007C648;
}

loc_8007C5D4:
{
    r3 = MemoryInline::FlatRead16((r3 + 252));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 2147483647);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r7 = (r7_rot_1 & 1);
    r0 = (r3 + -1);
    r3 = (0 - r7);
    r0 = (r0 & 65535);
    r0 = (r0 & ~r3);
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8007C5FC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8007C608;
    }
}

loc_8007C600:
{
    r3 = 0;
    goto loc_8007C648;
}

loc_8007C608:
{
    r0 = (r0 - r5);
    r31 = r6;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_8007C614:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8007C61C;
    }
}

loc_8007C618:
{
    r31 = r0;
}

loc_8007C61C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 131070);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r3 = (r8 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r30 + r31);
    MemoryInline::FlatWrite16((r29 + 254), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r29 + 216));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 131070);
    r5 = 0;
    r3 = (r31 & 65535);
    r4_addr_1 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_1, static_cast<uint16_t>(r5));
}

loc_8007C648:
{
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
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00001FB gpr_write=0xE00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8007C5A0 func_8007C5A0 preserves=true fpr_mask=0x00000000
