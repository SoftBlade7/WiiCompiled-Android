#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80598744(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80598744;

loc_80598744:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r0 & 16);
}

loc_80598768:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8059880C;
    }
}

loc_8059876C:
{
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    r3 = 0x808B0000u;
    f1.d = std::fabs(f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 25968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80598780:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805987F8;
    }
}

loc_80598784:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 32768);
}

loc_80598794:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805987F8;
    }
}

loc_80598798:
{
    r0 = (r3 & 4096);
}

loc_8059879C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805987F8;
    }
}

loc_805987A0:
{
    r0 = (r3 & 262144);
}

loc_805987A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8059880C;
    }
}

loc_805987A8:
{
    r3 = r31;
    // inline leaf 0x80590CBC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 204);
    // end of inlined leaf 0x80590CBC
    r6 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32(r3);
    r5 = (r6 + 16688);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r4 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 25964));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805987F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8059880C;
    }
}

loc_805987F8:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_8059880C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r5 & 32);
}

loc_8059881C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8059884C;
    }
}

loc_80598820:
{
    r0 = (r5 & 8);
}

loc_80598824:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8059884C;
    }
}

loc_80598828:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r4 & 96);
}

loc_80598830:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8059883C;
    }
}

loc_80598834:
{
    r0 = (r4 & 4096);
}

loc_80598838:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8059884C;
    }
}

loc_8059883C:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_8059884C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059885C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8059887C;
    }
}

loc_80598860:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r3 = r31;
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r31 = (r31_rot_1 & 1);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r31));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    MemoryInline::FlatWrite8((r3 + 368), static_cast<uint8_t>(r0));
}

loc_8059887C:
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80598744 func_80598744 preserves=true fpr_mask=0x00000000
