#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B1108(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807B1108;

loc_807B1108:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r5 = MemoryInline::FlatRead32((r3 + 452));
}

loc_807B112C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_807B1134;
    }
}

loc_807B1130:
{
    goto loc_807B1138;
}

loc_807B1134:
{
    r5 = MemoryInline::FlatRead32((r3 + 416));
}

loc_807B1138:
{
    r4 = MemoryInline::FlatRead32((r3 + 424));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 424), r0);
    r3 = r5;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    // inline leaf 0x80581A40 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & -536870913);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x80581A40
    r4 = MemoryInline::FlatRead32((r31 + 416));
    r3 = 0x809C0000u;
    r0 = (r30 * 584);
    r4 = MemoryInline::FlatRead8((r4 + 24));
    MemoryInline::FlatWrite8((r31 + 420), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r31 + 416), r3);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    // inline leaf 0x80581A28 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 536870912);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x80581A28
    r0 = MemoryInline::FlatRead32((r31 + 452));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B1184:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B1190;
    }
}

loc_807B1188:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 452), r0);
}

loc_807B1190:
{
    r4 = 0x808A0000u;
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 24048));
    r4 = 289;
    ctx->lr = 0x807B11A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A2F18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 472));
    r0 = 45;
    MemoryInline::FlatWrite32((r31 + 468), r0);
    r5 = 480;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(480));
}

loc_807B11B8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807B11C0;
    }
}

loc_807B11BC:
{
    r5 = r3;
}

loc_807B11C0:
{
    r3 = 0x808A0000u;
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24048));
    r3 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24420));
    r0 = 80;
    MemoryInline::FlatWrite32((r31 + 472), r5);
    MemoryInline::FlatWriteFloat32((r31 + 504), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 508), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 500), f0.d);
    MemoryInline::FlatWrite8((r31 + 436), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r31 + 428), r0);
    MemoryInline::FlatWriteFloat32((r31 + 432), f1.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xC000103B gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x807B1108 func_807B1108 preserves=true fpr_mask=0x00000000
