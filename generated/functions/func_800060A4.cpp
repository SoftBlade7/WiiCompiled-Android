#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800060A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_blrl_80006144_loc_0 = 0;
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800060A4;

loc_800060A4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    InvokeDirectCpu<0x80006210u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x80006348u>(ctx);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + -8), r1);
    r1 = (r1 + -8);
    MemoryInline::FlatWriteRam32((r1 + 4), r0);
    MemoryInline::FlatWriteRam32(r1, r0);
    ctx->lr = 0x800060C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x800062A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    r6 = 0x80000000u;
    r6 = (r6 + 68);
    MemoryInline::FlatWriteRam32(r6, r0);
    r6 = 0x80000000u;
    r6 = (r6 + 244);
    r6 = MemoryInline::FlatRead32(r6);
}

loc_800060E0:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(0))) {
        goto loc_800060EC;
    }
}

loc_800060E4:
{
    r7 = MemoryInline::FlatRead32((r6 + 12));
    goto loc_8000610C;
}

loc_800060EC:
{
    r5 = 0x80000000u;
    r5 = (r5 + 52);
    r5 = MemoryInline::FlatRead32(r5);
}

loc_800060FC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(0))) {
        goto loc_80006148;
    }
}

loc_80006100:
{
    r7 = 0x80000000u;
    r7 = (r7 + 12520);
    r7 = MemoryInline::FlatRead32(r7);
}

loc_8000610C:
{
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
}

loc_80006114:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80006138;
    }
}

loc_80006118:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
}

loc_8000611C:
{
    r5 = 1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80006138;
    }
}

loc_80006124:
{
}

loc_80006128:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(4))) {
        goto loc_80006148;
    }
}

loc_8000612C:
{
    r5 = 2;
    // inline leaf 0x80006090 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -25264), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80006090
    goto loc_80006148;
}

loc_80006138:
{
    r6 = 0x80020000u;
    r6 = (r6 + -15540);
    ctx->lr = r6;
    addr_blrl_80006144_loc_0 = ctx->lr;
    ctx->lr = 0x80006148u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(addr_blrl_80006144_loc_0, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80006148:
{
    r6 = 0x80000000u;
    r6 = (r6 + 244);
    r5 = MemoryInline::FlatRead32(r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(0));
}

loc_80006158:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800061B8;
    }
}

loc_8000615C:
{
    r6 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(0));
}

loc_80006164:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800061B8;
    }
}

loc_80006168:
{
    r6 = (r5 + r6);
    r14 = MemoryInline::FlatRead32(r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r14), static_cast<uint32_t>(0));
}

loc_80006174:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800061B8;
    }
}

loc_80006178:
{
    r15 = (r6 + 4);
    ctr = r14;
}

loc_80006180:
{
    r6 = (r6 + 4);
    r7 = MemoryInline::FlatRead32(r6);
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32(r6, r7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80006180;
    }
}

loc_80006194:
{
    r5 = 0x80000000u;
    r5 = (r5 + 52);
    r7 = (r15 & -32);
    MemoryInline::FlatWriteRam32(r5, r7);
    r5 = 0x80000000u;
    r5 = (r5 + 12560);
    r7 = (r15 & -32);
    MemoryInline::FlatWriteRam32(r5, r7);
    goto loc_800061C0;
}

loc_800061B8:
{
    r14 = 0;
    r15 = 0;
}

loc_800061C0:
{
    // inline leaf 0x8015D314 (10 guest instruction(s))
    r4 = 0x80000000u;
    r3 = 0x80160000u;
    r5 = (r4 + 64);
    r0 = 1;
    r3 = (r3 + -11388);
    MemoryInline::FlatWrite32((r13 + -26112), r5);
    r3 = (r3 + -2147483648);
    MemoryInline::FlatWriteRam32((r4 + 72), r3);
    MemoryInline::FlatWrite32((r13 + -26108), r0);
    // end of inlined leaf 0x8015D314
    ctx->lr = 0x800061C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019FC68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x80000000u;
    r4 = (r4 + 12518);
    r3 = MemoryInline::FlatRead16(r4);
    r5 = (r3 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800061D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800061E8;
    }
}

loc_800061DC:
{
    r3 = (r3 & 32767);
}

loc_800061E0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_800061E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800061EC;
    }
}

loc_800061E8:
{
    ctx->lr = 0x800061ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80006068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800061EC:
{
    // inline leaf 0x8000609C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r13 + -25264));
    // end of inlined leaf 0x8000609C
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_800061F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800061FC;
    }
}

loc_800061F8:
{
    ctx->lr = 0x800061FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8001C3E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800061FC:
{
    ctx->lr = 0x80006200u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801AE524u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r14;
    r4 = r15;
    ctx->lr = 0x8000620Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8000B6B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801AE58Cu>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800060A4 func_800060A4 preserves=true fpr_mask=0x00000000
