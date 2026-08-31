#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F1FFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F1FFC;

loc_801F1FFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F2008:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F201C;
    }
}

loc_801F2014:
{
    r3 = 1;
    goto loc_801F2120;
}

loc_801F201C:
{
    r9 = (r3 & 255);
    r0 = (r3 & 65280);
}

loc_801F2028:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(26))) {
        goto loc_801F2034;
    }
}

loc_801F202C:
{
}

loc_801F2030:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(768))) {
        goto loc_801F203C;
    }
}

loc_801F2034:
{
    r0 = 1;
    goto loc_801F20C8;
}

loc_801F203C:
{
    r5 = (r9 * 56);
    r6 = 0x80360000u;
    r0 = 13;
    r6 = (r6 + -23936);
    r5 = (r6 + r5);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r8 = (r8_rot_1 & 65535);
    r7 = (r5 + 420);
    r5 = 0;
    ctr = r0;
}

loc_801F2060:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 524280);
    r10 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r10 + 8));
}

loc_801F2070:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r7))) {
        goto loc_801F2080;
    }
}

loc_801F2074:
{
    r0 = MemoryInline::FlatRead32((r10 + 4));
}

loc_801F207C:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r0))) {
        goto loc_801F20AC;
    }
}

loc_801F2080:
{
    r5 = (r5 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r10 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r10 + 8));
}

loc_801F2094:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r7))) {
        goto loc_801F20A4;
    }
}

loc_801F2098:
{
    r0 = MemoryInline::FlatRead32((r10 + 4));
}

loc_801F20A0:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r0))) {
        goto loc_801F20AC;
    }
}

loc_801F20A4:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F2060;
    }
}

loc_801F20AC:
{
    r6 = (r5 & 65535);
    r5 = 26;
    r0 = (r6 + -26);
    r5 = (r6 | ~r5);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r5 - r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_801F20C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F20CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F20D8;
    }
}

loc_801F20D0:
{
    r3 = r0;
    goto loc_801F2120;
}

loc_801F20D8:
{
    r0 = (r9 * 56);
    r5 = 0x80360000u;
    r5 = (r5 + -23936);
    r31 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r31 + 424));
    r12 = MemoryInline::FlatRead32((r5 + 16));
    ctr = r12;
    ctx->lr = 0x801F20F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F20FC:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F211C;
    }
}

loc_801F2104:
{
    r3 = MemoryInline::FlatRead32((r31 + 468));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F210C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2114;
    }
}

loc_801F2110:
{
    // inline leaf 0x801F3EAC (7 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80360000u;
    r0 = (r0 * 44);
    r3 = (r3 + -23936);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 1912), r4);
    // end of inlined leaf 0x801F3EAC
}

loc_801F2114:
{
    r3 = 21;
    goto loc_801F2120;
}

loc_801F211C:
{
    r3 = 0;
}

loc_801F2120:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F1FFC func_801F1FFC preserves=true fpr_mask=0x00000000
