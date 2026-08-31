#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088E2D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8088E2D8;

loc_8088E2D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = (r4 * 24);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 28));
    r5_addr_0 = (r5 + r31);
    r0 = MemoryInline::FlatRead8(r5_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088E308:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088E3CC;
    }
}

loc_8088E30C:
{
    r4 = (r5 + r31);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r4 = MemoryInline::FlatRead16((r4 + 20));
    r5 = (0 - r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8088E828u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r8 = 0;
    goto loc_8088E3B0;
}

loc_8088E328:
{
    r3 = MemoryInline::FlatRead32((r29 + 52));
    r0 = (r8 & 65535);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & 262140);
    r9 = 0;
    r3_addr_2 = (r3 + r0);
    r4 = MemoryInline::FlatRead8(r3_addr_2);
    goto loc_8088E3A0;
}

loc_8088E340:
{
    r3 = MemoryInline::FlatRead32((r29 + 60));
    r0 = (r9 & 65535);
    r3_addr_4 = (r3 + r7);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_5);
}

loc_8088E354:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_8088E39C;
    }
}

loc_8088E358:
{
    r6 = (r8 & 65535);
    goto loc_8088E37C;
}

loc_8088E360:
{
    r3 = MemoryInline::FlatRead32((r29 + 60));
    r0 = (r9 & 65535);
    r9 = (r9 + 1);
    r7_addr_3 = (r7 + r3);
    r3 = MemoryInline::FlatRead32(r7_addr_3);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_8088E37C:
{
    r5 = MemoryInline::FlatRead32((r29 + 52));
    r4 = (r9 & 65535);
    r6_addr_3 = (r6 + r5);
    r3 = MemoryInline::FlatRead8(r6_addr_3);
    r0 = (r3 + -1);
}

loc_8088E390:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8088E360;
    }
}

loc_8088E394:
{
    r6_addr_4 = (r6 + r5);
    MemoryInline::FlatWrite8(r6_addr_4, static_cast<uint8_t>(r0));
    goto loc_8088E3AC;
}

loc_8088E39C:
{
    r9 = (r9 + 1);
}

loc_8088E3A0:
{
    r0 = (r9 & 65535);
}

loc_8088E3A8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_8088E340;
    }
}

loc_8088E3AC:
{
    r8 = (r8 + 1);
}

loc_8088E3B0:
{
    r0 = MemoryInline::FlatRead16((r29 + 16));
    r3 = (r8 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8088E3BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8088E328;
    }
}

loc_8088E3C0:
{
    r3 = MemoryInline::FlatRead32((r29 + 28));
    r0 = 0;
    r3_addr_7 = (r3 + r31);
    MemoryInline::FlatWrite8(r3_addr_7, static_cast<uint8_t>(r0));
}

loc_8088E3CC:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0001FFB gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8088E2D8 func_8088E2D8 preserves=true fpr_mask=0x00000000
