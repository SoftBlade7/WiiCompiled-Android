#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059D44C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059D44C;

loc_8059D44C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808B0000u;
    r30 = (r30 + 26664);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r4 & 4);
}

loc_8059D47C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8059D484;
    }
}

loc_8059D480:
{
    r29 = 1;
}

loc_8059D484:
{
    r0 = (r4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059D488:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059D494;
    }
}

loc_8059D490:
{
    r0 = 1;
}

loc_8059D494:
{
}

loc_8059D498:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8059D4AC;
    }
}

loc_8059D49C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 61), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 60), static_cast<uint8_t>(r0));
    goto loc_8059D514;
}

loc_8059D4AC:
{
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059D4B0:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059D4BC;
    }
}

loc_8059D4B8:
{
    r0 = 1;
}

loc_8059D4BC:
{
}

loc_8059D4C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8059D4D8;
    }
}

loc_8059D4C4:
{
    r4 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 61), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 60), static_cast<uint8_t>(r0));
    goto loc_8059D514;
}

loc_8059D4D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059D4E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8059D514;
    }
}

loc_8059D4E4:
{
    r3 = r31;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r29));
    r4 = r3;
    r3 = r31;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_1 & 134217727);
    ctx->lr = 0x8059D500u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8059DAE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8059D504:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8059D514;
    }
}

loc_8059D508:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 61), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 60), static_cast<uint8_t>(r0));
}

loc_8059D514:
{
    r3 = MemoryInline::FlatRead16((r31 + 22));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 30));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8059D520:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8059D53C;
    }
}

loc_8059D524:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 64));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8059D530:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059D53C;
    }
}

loc_8059D534:
{
    r0 = MemoryInline::FlatRead16((r30 + 40));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r31 + 64), r0);
}

loc_8059D53C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 16);
}

loc_8059D54C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8059D55C;
    }
}

loc_8059D550:
{
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_8059D558:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8059D568;
    }
}

loc_8059D55C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 61), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 60), static_cast<uint8_t>(r0));
}

loc_8059D568:
{
    r3 = MemoryInline::FlatRead32((r31 + 64));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059D570:
{
    MemoryInline::FlatWrite32((r31 + 64), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059D580;
    }
}

loc_8059D578:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 64), r0);
}

loc_8059D580:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF43F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8059D44C func_8059D44C preserves=true fpr_mask=0x00000000
