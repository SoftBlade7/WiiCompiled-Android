#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80015350(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80015350;

loc_80015350:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r7 = 0x80000000u;
    r6 = 0x80010000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 0;
    r8 = (r1 + 12);
    r9 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    r4 = (r7 + -1);
    r7 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    r3 = r5;
    r5 = (r6 + 12216);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r6 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x800153A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800149ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800153A4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800153B4;
    }
}

loc_800153A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r30 + r0);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_800153B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800153BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800153F0;
    }
}

loc_800153C0:
{
    r5 = MemoryInline::FlatRead32((r1 + 12));
}

loc_800153C8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800153DC;
    }
}

loc_800153CC:
{
    r4 = 0x80000000u;
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_800153D8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800153F0;
    }
}

loc_800153DC:
{
}

loc_800153E0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80015418;
    }
}

loc_800153E4:
{
    r0 = 0x80000000u;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_800153EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80015418;
    }
}

loc_800153F0:
{
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r0 = 34;
    r3 = 0x80000000u;
    MemoryInline::FlatWrite32((r13 + -27600), r0);
    r4 = (0 - r5);
    r0 = (r3 + -1);
    r3 = (r4 | r5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r3 = (r3 + r0);
    goto loc_80015424;
}

loc_80015418:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8001541C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80015424;
    }
}

loc_80015420:
{
    r3 = (0 - r3);
}

loc_80015424:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFC3F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80015350 func_80015350 preserves=true fpr_mask=0x00000000
