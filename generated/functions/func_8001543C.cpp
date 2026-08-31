#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001543C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001543C;

loc_8001543C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0x80010000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 0;
    r5 = (r5 + 12216);
    r6 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x80000000u;
    r4 = (r31 + -1);
    r7 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r8 = (r1 + 12);
    r9 = (r1 + 16);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x80015480u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80015488:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800154B8;
    }
}

loc_8001548C:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
}

loc_80015494:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800154A4;
    }
}

loc_80015498:
{
    r0 = (r31 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_800154A0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800154B8;
    }
}

loc_800154A4:
{
}

loc_800154A8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800154E0;
    }
}

loc_800154AC:
{
    r0 = 0x80000000u;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_800154B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800154E0;
    }
}

loc_800154B8:
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
    goto loc_800154EC;
}

loc_800154E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800154E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800154EC;
    }
}

loc_800154E8:
{
    r3 = (0 - r3);
}

loc_800154EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFC3F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8001543C func_8001543C preserves=true fpr_mask=0x00000000
