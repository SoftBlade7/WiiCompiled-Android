#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014D878(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r29 = ctx->gpr[29];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8014D878;

loc_8014D878:
{
    r0 = MemoryInline::FlatRead8((r16 + 5));
    r3 = MemoryInline::FlatRead8((r16 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead8((r16 + 7));
    r4 = MemoryInline::FlatRead8((r16 + 6));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r0 = (r4 + r0);
    r17 = (r0 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014FA2Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014D8AC:
{
    r16 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014D8E8;
    }
}

loc_8014D8B4:
{
    r0 = MemoryInline::FlatRead8((r27 + -27840));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8014D8BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014D8D0;
    }
}

loc_8014D8C0:
{
    r5 = MemoryInline::FlatRead16((r1 + 16));
    r3 = (r29 + 1);
    r4 = (r23 + 392);
    ctx->lr = 0x8014D8D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8014D8D0:
{
    r3 = r15;
    r4 = r17;
    r5 = r25;
    r6 = 2;
    ctx->lr = 0x8014D8E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014E91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

loc_8014D8E8:
{
    r3 = r15;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014F6C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014D8F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014D928;
    }
}

loc_8014D8F8:
{
    r0 = MemoryInline::FlatRead8((r27 + -27840));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8014D900:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014D910;
    }
}

loc_8014D904:
{
    r4 = (r23 + 436);
    r3 = 524288;
    ctx->lr = 0x8014D910u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8014D910:
{
    r3 = r15;
    r4 = r17;
    r5 = r25;
    r6 = 4;
    ctx->lr = 0x8014D924u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014E91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

loc_8014D928:
{
    MemoryInline::FlatWrite8((r3 + 54), static_cast<uint8_t>(r25));
    r5 = (r1 + 8);
    r4 = 10;
    MemoryInline::FlatWrite32((r3 + 48), r16);
    MemoryInline::FlatWrite16((r3 + 22), static_cast<uint16_t>(r17));
    ctx->lr = 0x8014D940u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014AC2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8014D878 func_8014D878 preserves=true fpr_mask=0x00000000
