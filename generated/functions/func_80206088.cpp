#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80206088(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80206088;

loc_80206088:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80206094:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802060B4;
    }
}

loc_802060AC:
{
    r3 = 10;
    goto loc_8020622C;
}

loc_802060B4:
{
    r0 = MemoryInline::FlatRead16((r3 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802060BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802060C8;
    }
}

loc_802060C0:
{
    r3 = 9;
    goto loc_8020622C;
}

loc_802060C8:
{
    r3 = (r1 + 8);
    // inline leaf 0x80207CFC (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    r3 = 0;
    // end of inlined leaf 0x80207CFC
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r30 + 584);
    r7 = 1;
    goto loc_80206130;
}

loc_802060E0:
{
    r0 = MemoryInline::FlatRead32((r3 + 5632));
    r0 = (r0 & 1);
}

loc_802060E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80206128;
    }
}

loc_802060EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 5636));
}

loc_802060F4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_80206128;
    }
}

loc_802060F8:
{
    r3 = (r7 * 584);
    r0 = 72;
    r5 = (r31 + -4);
    r3 = (r30 + r3);
    r4 = (r3 + 5636);
    ctr = r0;
}

loc_80206110:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80206110;
    }
}

loc_80206124:
{
    goto loc_80206138;
}

loc_80206128:
{
    r3 = (r3 + 584);
    r7 = (r7 + 1);
}

loc_80206130:
{
}

loc_80206134:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(1))) {
        goto loc_802060E0;
    }
}

loc_80206138:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
}

loc_8020613C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80206228;
    }
}

loc_80206140:
{
    r3 = 0x80360000u;
    r4 = 1;
    r3 = (r3 + -20912);
    r3 = (r3 + 8);
    goto loc_80206180;
}

loc_80206154:
{
    r0 = MemoryInline::FlatRead32((r3 + 64));
    r0 = (r0 & 1);
}

loc_8020615C:
{
    MemoryInline::FlatWrite32((r3 + 64), r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80206178;
    }
}

loc_80206164:
{
    r0 = MemoryInline::FlatRead32((r3 + 68));
}

loc_8020616C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_80206178;
    }
}

loc_80206170:
{
    r0 = 1;
    goto loc_8020618C;
}

loc_80206178:
{
    r3 = (r3 + 8);
    r4 = (r4 + 1);
}

loc_80206180:
{
}

loc_80206184:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(1))) {
        goto loc_80206154;
    }
}

loc_80206188:
{
    r0 = 0;
}

loc_8020618C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206190:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206204;
    }
}

loc_80206194:
{
    r3 = (r30 + 584);
    r4 = 1;
    goto loc_802061F8;
}

loc_802061A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 5632));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802061A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802061F0;
    }
}

loc_802061AC:
{
    r3 = (r4 * 584);
    r0 = 72;
    r5 = (r31 + -4);
    r6 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r6 + 5632));
    r4 = (r6 + 5636);
    r3 = (r3 | 1);
    MemoryInline::FlatWrite32((r6 + 5632), r3);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r6 + 5636), r3);
    ctr = r0;
}

loc_802061D8:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802061D8;
    }
}

loc_802061EC:
{
    goto loc_80206228;
}

loc_802061F0:
{
    r3 = (r3 + 584);
    r4 = (r4 + 1);
}

loc_802061F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_802061FC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802061A0;
    }
}

loc_80206200:
{
    goto loc_80206228;
}

loc_80206204:
{
    r0 = 72;
    r5 = (r31 + -4);
    r4 = (r30 + 5636);
    ctr = r0;
}

loc_80206214:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80206214;
    }
}

loc_80206228:
{
    r3 = 0;
}

loc_8020622C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80206088 func_80206088 preserves=true fpr_mask=0x00000000
