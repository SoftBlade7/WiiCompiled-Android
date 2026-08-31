#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D7458(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D7458;

loc_807D7458:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead32(r6);
    r30 = r3;
    r27 = r4;
    r31 = r6;
}

loc_807D7480:
{
    r28 = r7;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D74C0;
    }
}

loc_807D7488:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead16((r4 + 250));
}

loc_807D7494:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D74A4;
    }
}

loc_807D7498:
{
    r0 = (r3 + 624);
    MemoryInline::FlatWrite32((r3 + 648), r0);
    goto loc_807D74C0;
}

loc_807D74A4:
{
}

loc_807D74A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_807D74B8;
    }
}

loc_807D74AC:
{
    r0 = (r3 + 636);
    MemoryInline::FlatWrite32((r3 + 648), r0);
    goto loc_807D74C0;
}

loc_807D74B8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 648), r0);
}

loc_807D74C0:
{
    r4 = MemoryInline::FlatRead32((r3 + 648));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807D74C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D7570;
    }
}

loc_807D74CC:
{
    r0 = MemoryInline::FlatRead32(r6);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r4_addr_1 = (r4 + r3);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r3 = (r1 + 8);
    r0 = (r0 * 28);
    r29 = (r4 + r0);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8019A4E0u>(ctx);
    f0 = ctx->fpr[0];
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r3 = r27;
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r5 = r27;
    r4 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    r0 = MemoryInline::FlatRead8((r30 + 573));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D751C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D7570;
    }
}

loc_807D7520:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807D7524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D7570;
    }
}

loc_807D7528:
{
    r5 = 0;
    r4 = 0;
    goto loc_807D7554;
}

loc_807D7534:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r3);
    r0 = MemoryInline::FlatRead32((r30 + 612));
}

loc_807D7548:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_807D7550;
    }
}

loc_807D754C:
{
    MemoryInline::FlatWrite32(r31, r4);
}

loc_807D7550:
{
    r5 = (r5 + 1);
}

loc_807D7554:
{
    r0 = MemoryInline::FlatRead8((r30 + 575));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 1);
    r3 = (0 - r0);
    r0 = (r3 + 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_807D756C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D7534;
    }
}

loc_807D7570:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80000FF gpr_write=0xF800087B gpr_return=0x00000018 fpr_read=0x8000C001 fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D7458 func_807D7458 preserves=true fpr_mask=0x00000000
