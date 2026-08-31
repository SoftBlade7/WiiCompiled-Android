#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80809448(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80809448;

loc_80809448:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    ctx->lr = 0x8080946Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081A980u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 84));
    r3 = 0x808D0000u;
    r3 = (r3 + 23264);
    MemoryInline::FlatWrite32(r30, r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80809480:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8080948C;
    }
}

loc_80809484:
{
    r3 = (r30 + 72);
    goto loc_808094BC;
}

loc_8080948C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 20);
    r4 = (r30 + 88);
    ctx->lr = 0x808094A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_808094BC:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808094CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 260), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 264), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 268), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808094E8;
    }
}

loc_808094E0:
{
    r4 = (r30 + 72);
    goto loc_80809518;
}

loc_808094E8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r30 + 88);
    ctx->lr = 0x808094FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80809518:
{
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -20376));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80809528:
{
    r0 = cr;
    r4 = 0x808B0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r30 + 272), static_cast<uint8_t>(r0));
    r3 = 1127219200;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -20360));
    r5 = MemoryInline::FlatRead32(r31);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = r30;
    r5 = MemoryInline::FlatRead16((r5 + 42));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 276), f0.d);
    r4 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead16((r4 + 44));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWrite32((r30 + 280), r4);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & -2);
    r4 = MemoryInline::FlatRead32(r31);
    r6 = MemoryInline::FlatRead16((r4 + 46));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::FlatWrite32((r30 + 284), r6);
    r4 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead16((r4 + 48));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWrite32((r30 + 288), r4);
    r4 = (r4 + r6);
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r30 + 292), r4);
    MemoryInline::FlatWrite32((r30 + 296), r0);
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80809448 func_80809448 preserves=true fpr_mask=0x00000000
