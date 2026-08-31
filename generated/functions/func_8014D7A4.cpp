#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014D7A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r29 = ctx->gpr[29];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8014D7A4;

loc_8014D7A4:
{
    r0 = MemoryInline::FlatRead8((r16 + 5));
    r3 = MemoryInline::FlatRead8((r16 + 4));
    r16 = (r16 + 6);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r0 = (r3 + r0);
    r17 = (r0 & 65535);
}

loc_8014D7C0:
{
    if ((static_cast<uint32_t>(r17) != static_cast<uint32_t>(1))) {
        goto loc_8014D7F8;
    }
}

loc_8014D7C4:
{
    r3 = MemoryInline::FlatRead8((r16 + 1));
    r0 = MemoryInline::FlatRead8((r27 + -27840));
    r4 = MemoryInline::FlatRead8(r16);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8014D7D8:
{
    r16 = (r16 + 2);
    r0 = (r4 + r3);
    r6 = (r0 & 65535);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014D7F8;
    }
}

loc_8014D7E8:
{
    r5 = MemoryInline::FlatRead16((r15 + 40));
    r3 = (r29 + 1);
    r4 = (r23 + 308);
    ctx->lr = 0x8014D7F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8014D7F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
}

loc_8014D7FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014D724;
    }
}

loc_8014D800:
{
    r4 = MemoryInline::FlatRead8((r16 + 1));
    r3 = MemoryInline::FlatRead8((r16 + 3));
    r0 = MemoryInline::FlatRead8((r27 + -27840));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r5 = (r5_rot_1 & -256);
    r6 = MemoryInline::FlatRead8(r16);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & -256);
    r4 = MemoryInline::FlatRead8((r16 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8014D820:
{
    r5 = (r6 + r5);
    r0 = (r4 + r3);
    r17 = (r5 & 65535);
    r16 = (r0 & 65535);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014D848;
    }
}

loc_8014D834:
{
    r5 = r16;
    r6 = r17;
    r3 = (r29 + 1);
    r4 = (r23 + 344);
    ctx->lr = 0x8014D848u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8014D848:
{
    r3 = r15;
    r4 = r16;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014F974u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014D858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014D724;
    }
}

loc_8014D85C:
{
    r0 = MemoryInline::FlatRead16((r3 + 22));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r17));
}

loc_8014D864:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014D724;
    }
}

loc_8014D868:
{
    r4 = 3;
    r5 = 0;
    ctx->lr = 0x8014D874u;
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
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
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
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
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

loc_8014D724:
{
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
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
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
// RECOMP_REGISTRATION base 0x8014D7A4 func_8014D7A4 preserves=true fpr_mask=0x00000000
