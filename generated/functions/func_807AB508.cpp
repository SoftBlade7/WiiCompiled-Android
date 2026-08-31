#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AB508(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807AB508;

loc_807AB508:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x807AB520u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079DEE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 120));
    r5 = 0;
    r4 = -1;
    MemoryInline::FlatWrite16((r31 + 692), static_cast<uint16_t>(r5));
    r0 = (r3 & 33554432);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AB534:
{
    MemoryInline::FlatWrite32((r31 + 696), r4);
    MemoryInline::FlatWrite32((r31 + 700), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AB61C;
    }
}

loc_807AB540:
{
    r0 = MemoryInline::FlatRead8((r31 + 616));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_807AB548:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AB5F0;
    }
}

loc_807AB54C:
{
    r0 = (r3 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AB550:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 696), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807AB564;
    }
}

loc_807AB55C:
{
    r0 = MemoryInline::FlatRead8((r31 + 108));
    goto loc_807AB568;
}

loc_807AB564:
{
    r0 = 12;
}

loc_807AB568:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_807AB56C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807AB578;
    }
}

loc_807AB570:
{
    r0 = 12;
    goto loc_807AB5CC;
}

loc_807AB578:
{
    r3 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r5 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r3 + -1);
    r4 = (r0 & 255);
}

loc_807AB59C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(1))) {
        goto loc_807AB5A8;
    }
}

loc_807AB5A0:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r3 + 14520));
}

loc_807AB5A8:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14520));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807AB5B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807AB5C8;
    }
}

loc_807AB5B8:
{
    r0 = MemoryInline::FlatRead32((r5 + 24));
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -1));
    goto loc_807AB5CC;
}

loc_807AB5C8:
{
    r0 = 12;
}

loc_807AB5CC:
{
    r7 = MemoryInline::FlatRead8((r31 + 720));
    r3 = r31;
    r8 = (r0 & 255);
    r4 = 45;
    r5 = 0;
    r6 = 1;
    r9 = 0;
    ctx->lr = 0x807AB5ECu;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B50F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807AB60C;
}

loc_807AB5F0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 696), r0);
    r5 = MemoryInline::FlatRead8((r31 + 720));
    r3 = r31;
    r4 = 0;
    r6 = 0;
    ctx->lr = 0x807AB60Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B66F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_807AB60C:
{
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r31 + 120), r0);
    goto loc_807AB638;
}

loc_807AB61C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 696), r0);
    r5 = MemoryInline::FlatRead8((r31 + 720));
    r3 = r31;
    r4 = 0;
    r6 = 0;
    ctx->lr = 0x807AB638u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B66F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_807AB638:
{
    r3 = r31;
    // inline leaf 0x807B2EF8 (7 guest instruction(s))
    r4 = 0x808A0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24648));
    MemoryInline::FlatWrite32((r3 + 640), r0);
    MemoryInline::FlatWriteFloat32((r3 + 644), f0.d);
    MemoryInline::FlatWrite32((r3 + 684), r0);
    // end of inlined leaf 0x807B2EF8
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC3FFF gpr_write=0xFFFC1FFB gpr_return=0x00000018 fpr_read=0xC00000FF fpr_write=0xC0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807AB508 func_807AB508 preserves=true fpr_mask=0x00000000
