#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012EFF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

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

    goto loc_8012EFF0;

loc_8012EFF0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x80310000u;
    r6 = 0x80280000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
}

loc_8012F008:
{
    r7 = (r7 + -26176);
    r6 = (r6 + 9944);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = (r7 + 84);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012F050;
    }
}

loc_8012F034:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
}

loc_8012F038:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012F050;
    }
}

loc_8012F03C:
{
    r0 = (r30 + 196608);
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead8((r3 + -30804));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012F04C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012F070;
    }
}

loc_8012F050:
{
    r3 = 65536;
    r4 = (r6 + 104);
    r0 = (r3 + -5);
    r3 = (r0 & 65535);
    // inline leaf 0x801302CC (1 guest instruction(s))
    // end of inlined leaf 0x801302CC
    r3 = r31;
    ctx->lr = 0x8012F06Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8012F18C;
}

loc_8012F070:
{
    r31 = (r5 + -8);
    r0 = (r31 & 1);
}

loc_8012F078:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012F084;
    }
}

loc_8012F07C:
{
    r0 = 0;
    goto loc_8012F0A8;
}

loc_8012F084:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_8012F08C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_8012F0A4;
    }
}

loc_8012F090:
{
    r3 = (r7 + 196608);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 4080);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + -30232));
    goto loc_8012F0A8;
}

loc_8012F0A4:
{
    r0 = 0;
}

loc_8012F0A8:
{
    r4 = (r5 + r0);
    r0 = (r4 & 1);
}

loc_8012F0B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012F0BC;
    }
}

loc_8012F0B4:
{
    r0 = 1;
    goto loc_8012F0D8;
}

loc_8012F0BC:
{
    r3 = -574947328;
    r4 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + -8774);
    r3 = (r0 - r4);
    r0 = (r4 - r0);
    r0 = (r3 | r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_8012F0D8:
{
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012F0DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012F0F8;
    }
}

loc_8012F0E0:
{
    r3 = 65536;
    r4 = (r6 + 128);
    r0 = (r3 + -1);
    r3 = (r0 & 65535);
    // inline leaf 0x801302CC (1 guest instruction(s))
    // end of inlined leaf 0x801302CC
    goto loc_8012F18C;
}

loc_8012F0F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8012F100:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012F11C;
    }
}

loc_8012F104:
{
    r3 = 65536;
    r4 = (r6 + 152);
    r0 = (r3 + -6);
    r3 = (r0 & 65535);
    // inline leaf 0x801302CC (1 guest instruction(s))
    // end of inlined leaf 0x801302CC
    goto loc_8012F18C;
}

loc_8012F11C:
{
    ctx->lr = 0x8012F120u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80130288u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(4));
    r4 = (r4_rot_1 & 4080);
    r0 = (r30 + 196608);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & 1020);
    r0 = (r0 + r4);
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead32((r3 + -30580));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012F13C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012F14C;
    }
}

loc_8012F140:
{
    r3 = MemoryInline::FlatRead32((r3 + -30452));
    MemoryInline::FlatWrite32(r3, r31);
    goto loc_8012F150;
}

loc_8012F14C:
{
    MemoryInline::FlatWrite32((r3 + -30580), r31);
}

loc_8012F150:
{
    r0 = (r30 + 196608);
    r3 = 0;
    r4 = (r0 + r4);
    r4 = (r4 + r5);
    r0 = 2;
    MemoryInline::FlatWrite32((r4 + -30452), r31);
    MemoryInline::FlatWrite32(r31, r3);
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r28));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = 1;
    r3 = r28;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
    r4 = (r0 & 65535);
    ctx->lr = 0x8012F18Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801301B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8012F18C:
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

// RECOMP_GUEST_ABI gpr_read=0xF00000FB gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012EFF0 func_8012EFF0 preserves=true fpr_mask=0x00000000
