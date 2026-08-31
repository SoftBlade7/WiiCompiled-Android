#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80631C10_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80631C10_statefree_v0(uint32_t, uint32_t);

extern "C" void func_805BA08C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805BA08C;

loc_805BA08C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x80380000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r31 = MemoryInline::FlatRead32((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805BA0AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA0B8;
    }
}

loc_805BA0B0:
{
    r0 = 0;
    goto loc_805BA144;
}

loc_805BA0B8:
{
    r7 = 0x808B0000u;
    r0 = 115;
    r7 = (r7 + 29600);
    r3 = r31;
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8(r7);
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805BA0F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA0FC;
    }
}

loc_805BA0F4:
{
    r0 = 0;
    goto loc_805BA144;
}

loc_805BA0FC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_805BA100:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BA110;
    }
}

loc_805BA104:
{
    r0 = MemoryInline::FlatRead8((r3 + -1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_805BA10C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA140;
    }
}

loc_805BA110:
{
    r4 = 0x80890000u;
    r5 = (r1 + 12);
    r4 = (r4 + 10184);
    r4 = (r4 + 27);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r3 = (r3 + 2);
    ctx->lr = 0x805BA12Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (-1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + 1);
    r0 = (r4 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    goto loc_805BA144;
}

loc_805BA140:
{
    r0 = 0;
}

loc_805BA144:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BA148:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA154;
    }
}

loc_805BA14C:
{
    r3 = -1;
    goto loc_805BA170;
}

loc_805BA154:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80631C10u) && KnownTranslatedCpuCall<0x80631C10u>::kAvailable && !KnownTranslatedCpuCall<0x80631C10u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631C10u>()) {
        const auto state_free_result_80631C10_126D = func_80631C10_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631C10_126D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80631C10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805BA164:
{
    r3 = -1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA170;
    }
}

loc_805BA16C:
{
    r3 = r31;
}

loc_805BA170:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805BA08C func_805BA08C preserves=true fpr_mask=0x00000000
